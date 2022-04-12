#ifndef MESSAGE_FOLDER
#define MESSAGE_FOLDER
#include<iostream>
#include<string>
#include<set>

using namespace std;

class Folder;   //前向声明
class Message
{
	friend class Folder;   //友元类
	friend void print(const Message&);
	friend void swap(Message&, Message&);
public:
	explicit Message(const string &str = "") :contents(str) {}
	Message(const Message&);
	Message& operator=(const Message&);
	~Message();
	void save(Folder&);     //保存到某目录下
	void remove(Folder&);    //从某目录下删除
	void addFolder(Folder&);
	void remFolder(Folder&);
private:
	string contents;   //文本
	set<Folder*> folders;   //指向保存该邮件的目录
	void add_to_Folders(const Message&);   //18、19均为公共操作的工具函数
	void remove_from_Folders();
};
 
class Folder
{
	friend class Message;    //友元类
	friend void print(const Folder&);
	friend void swap(Folder&, Folder&);
public:
	Folder() = default;
	Folder(const Folder&);
	Folder& operator=(const Folder&);
	~Folder();
	void addMsg(Message*);
	void remMsg(Message*);
private:
	set<Message*> messages;
};
   //Message类相关函数定义
void Message::save(Folder &f)
{
	folders.insert(&f);
	f.addMsg(this);
}
void Message::remove(Folder &f)
{
	folders.erase(&f);
	f.remMsg(this);
}
void Message::add_to_Folders(const Message &m)
{
	for (auto i : m.folders)
		i->addMsg(this);
}
void Message::remove_from_Folders()
{
	for (auto i : folders)
		i->remMsg(this);
}
void Message::addFolder(Folder &f)
{
	folders.insert(&f);
}
void Message::remFolder(Folder &f)
{
	folders.erase(&f);
}
Message::Message(const Message &m) :contents(m.contents), folders(m.folders)
{
	add_to_Folders(m);
}
Message::~Message()   //存有指针的set会自动调用set的折构函数清理内存
{
	remove_from_Folders();
}
Message& Message::operator=(const Message &m)
{
	remove_from_Folders();
	contents = m.contents;
	folders = m.folders;
	add_to_Folders(m);
	return *this;
}
void print(const Message &m)
{
	cout << m.contents << endl;
}
void swap(Message &m1, Message &m2)
{
	using std::swap;
	for (auto i : m1.folders)
		i->remMsg(&m1);
	for (auto i : m2.folders)
		i->remMsg(&m2);
	swap(m1.contents, m2.contents);
	swap(m1.folders, m2.folders);
	for (auto i : m1.folders)
		i->addMsg(&m1);
	for (auto i : m2.folders)
		i->addMsg(&m2);
}
 
     //Folder类相关函数定义
void Folder::addMsg(Message *m)
{
	messages.insert(m);
}
void Folder::remMsg(Message *m)
{
	messages.erase(m);
}
Folder::Folder(const Folder &f) :messages(f.messages)
{
	for (auto i : f.messages)
	{
		i->folders.insert(this);
	}
}
Folder::~Folder()
{
	for (auto i : messages)
	{
		i->folders.erase(this);
	}
}
Folder& Folder::operator=(const Folder &f)
{
	for (auto i : messages)
	{
		i->folders.erase(this);
	}
	for (auto i : f.messages)
	{
		i->folders.insert(this);
	}
	return *this;
}
void print(const Folder &f)
{
	for (auto i : f.messages)
		print(*i);
}
void swap(Folder &f1, Folder &f2)
{
	using std::swap;
	for (auto i : f1.messages)
		i->remove(f1);
	for (auto i : f2.messages)
		i->remove(f2);
	swap(f1.messages, f2.messages);
	for (auto i : f1.messages)
		i->save(f1);
	for (auto i : f2.messages)
		i->save(f2);
}
#endif // !MESSAGEFOLDER

