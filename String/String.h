# ifndef STRING_H
# define STRING_H
#include<iostream>

using namespace std;

class String{
    public:
        friend ostream &operator<< (ostream& out, const String& s);
        friend istream &operator>>(istream &in, string &s);
        
    public:
        String();//默认构造函数
        String(const char *s);//带参构造函数
        String(const String &s);//拷贝构造函数
        String(const int n, const char ch); //n个ch构成的字符串
        ~String();//析构函数
        bool empty();
        char operator[](const int index);
        String operator=(const String &);
	    String operator+(const String &);
	    bool operator==(const String &);

    private:
        char *p;//指向存储字符串的指针
        int len;//字符串的长度
        
};
String::String()
{
    p[0] = '\0';
    len = 0;
}

String::String(const char *s){
    if (s == NULL)this->p = NULL;
	else
	{
		this->p = new char[strlen(s) + 1];
		strcpy(p,s);
	}
    return *this;
}

String::String(const int n,const char ch){
    this->p = new char[n + 1];
    for (int i = 0;i<n;++i)
        p[i] = ch;
    p[n] = '\0';
}
String::String(const String &s){
    if (s.p == NULL)this->p = NULL;

	else
	{
		this->p = new char[strlen(s.p)+1];
		strcpy(this->p,s.p);
        this->len = s.len;
    }return *this;
}
 explicit String::~String(){
    delete[] p;
}
ostream& operator<< (ostream& out, const String& s){
    out<<s.p;
    return out;
}
istream &operator>>(istream &in, string &s){
    char buffer[4096];
    if (in!=" ") { 
	    in >> buffer;
	    s.p = buffer;
    }
    else    
        return in;
}
bool String::empty() 
{
    if(this->p == NULL)
        return true;
    return false;
}
char& String::operator[] (const int index)
{
    return this->p[index]; 
}

String& String::operator=(const String& s)
{
    if (this==&s)
        return *this;//这里防止自赋值，return运行，此代码块结束
	delete[] this->p;
	if (s.p == NULL)
        this->p = NULL;
	else
	{
		this->p = new char[strlen(s.p)+1];
		strcpy(this->p,s.p);
        this->len = s.len;
	}
	return *this;
}
 
String& String::operator+(const String& s)
{
	if (s.p == NULL)
        return *this;
	else if(this->p == NULL)
	{
		this->p = new char[strlen(s.p) + 1];
		strcpy(this->p, s.p);
        this->len = s.len;
		return *this;
	}
	else
	{
		String strTmp;
		strTmp.p = new char[strlen(this->p) + strlen(s.p) + 1];
		strcpy(strTmp.p, this->p);
		strcat(strTmp.p, s.p);
        this->len += s.len;
        return *this;
    }
}
 

bool String::operator==(const String& s)
{
	int num = 0;
	num = strcmp(this->p,s.p);
	if (num == 0)
        return 1;
	else return 0;
}


# endif 