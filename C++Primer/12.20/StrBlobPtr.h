#ifndef STRBLOBPTR_H
#define STRBLOBPTR_H
#include<vector>
#include<string>
#include<initializer_list>
#include<memory>
#include<stdexcept>

using namespace std;

//提前声明，StrBlob中的友类声明所需
class StrBlobPtr;
class StrBlob{
    friend class StrBlobPtr;

public:
    typedef vector<string>::size_type size_type;
    StrBlob();
    StrBlob(initializer_list<string> il);

    size_type size() const { return data->size(); }
    bool empty() const { return data->empty(); }

    void push_back(const string &t) { data->push_back(t); }
    void pop_back();

    string &front();
    const string &front() const;
    string &back();
    const string &back() const;

    //提供给StrBlobPtr的借口
    StrBlobPtr begin();
    StrBlobPtr end();//定义完StrBlobPtr后才可以定义这两个函数

private:
    shared_ptr<vector<string>> data;
    //如果data[i]不合法，抛出异常
    void check(size_type i, const string &msg) const;
};

inline StrBlob::StrBlob(): data(make_shared<vector<string>> ()){}
StrBlob:: StrBlob(initializer_list<string> il):data(make_shared<vector<string>>(il)){}

inline   //调用频率高的成员函数用inline内联化，提高编译效率，因为每调用一个函数都很费资源
void StrBlob::check(size_type i,const string &msg)const {
    if (i>=data->size())
        throw out_of_range(msg);
}

inline string &StrBlob::front(){
    check(0, "front on empty StrBlob");
    return data->front();
}

inline const string& StrBlob::front() const{
    check(0, "front on empty StrBlob");
    return data->front();
}

inline string& StrBlob::back(){
    check(0, "back on empty StrBlob");
    return data->back();
}

inline const string& StrBlob::back() const{
    check(0, "back on empty StrBlob");
    return data->back();
}

inline void StrBlob::pop_back(){
    check(0, "pop_push on empty StrBlob");
    return data->pop_back();
}

class StrBlobPtr{
    friend bool eq(const StrBlobPtr &, const StrBlobPtr &);

public:
    StrBlobPtr() : curr(0) {}
    StrBlobPtr(StrBlob &a, size_t sz) : wptr(a.data), curr(sz) {}

    string &deref() const;
    StrBlobPtr &incr(); //前缀递增
    StrBlobPtr &decr(); //前缀递减

private:
    //若检查成功，check返回一个指向vector的shared_ptr
    shared_ptr<vector<string>>
    check(size_t, const string &) const;

    weak_ptr<vector<string>> wptr;
    size_t curr; //在容器中当前的位置
};

inline 
shared_ptr<vector<string>>
StrBlobPtr::check(size_t i, const string& msg) const{
    auto ret = wptr.lock();//ret为返回的指针
    if(!ret)
        throw runtime_error("unbound StrBlobPtr");
    if (i>=ret->size())//throw和return一样，一旦执行就终止此代码块
        throw out_of_range(msg);
    return ret;
}

//用于解引用，check成功才有解引用功能，否者调用deref()会抛出check的响应报错
inline string& StrBlobPtr::deref() const{
    auto p = check(curr, "dereference past end");
    return (*p)[curr];//(*p)是对象所指的vector
}

inline StrBlobPtr& StrBlobPtr::incr(){
    //当curr指向容器尾后的位置时，抛出异常，不递增
    check(curr, "increment past end of StrBlobPtr");
    ++curr;
    //*this返回的是调用本函数的对象的引用
    return *this;
}

inline StrBlobPtr& StrBlobPtr::decr(){
    --curr;
    check(-1, "decrement past begin of StrBlobPtr");
    return *this;
}

//begin(),end()作用是返回一个指向StrBlob对象自身的StrBlobPtr
inline StrBlobPtr StrBlob::begin(){
    return StrBlobPtr(*this,0);
    //*this就是这个对象本身，begin()是StrBlob的成员函数
    //*this是调用begin()的StrBlob对象的引用
    //所以，这里利用StrBlor通过构造函数构造StrBlobPtr对象
}

inline StrBlobPtr StrBlob::end(){
    auto ret = StrBlobPtr(*this, data->size());
    return ret;
}

inline
bool eq(const StrBlobPtr&lhs, const StrBlobPtr& rhs){
    auto l = lhs.wptr.lock(), r = rhs.wptr.lock();
    if(l==r)//||是或的意思，左侧为真就不看右侧了
        return (!r || lhs.curr == rhs.curr);
    else
        return false;
}

inline
bool neq(const StrBlobPtr&lhs, const StrBlobPtr& rhs){
    return !eq(lhs, rhs);
}
#endif