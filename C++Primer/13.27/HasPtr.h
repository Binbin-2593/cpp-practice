#ifndef HASPTR_H
#define HASPTR_H
#include<string>

using namespace std;

class HasPtr{
public:
    HasPtr(const string &s=string()):ps(new string (s)),i(0),use(new size_t(1)){}
    HasPtr(const HasPtr &p) : ps(p.ps), i(p.i), use(p.use) { ++*use; }
    HasPtr &operator=(const HasPtr &);
    HasPtr &operator=(const string &s){
        *ps = s;
        return *this;
    }
    string &operator*() { return *ps; }
    ~HasPtr();

    string get_s(){return *ps;}
    int get_i() { return i; }
    size_t get_si() { return *use; }

private:
    string *ps;
    int i;
    size_t *use;
};

HasPtr& HasPtr::operator=(const HasPtr &p){
    ++*p.use;
    if(--*use==0){
        delete ps;
        delete use;
    }//先++后--，防止自赋值

    ps = p.ps;
    i=p.i;
    use=p.use;
    return *this;
}


HasPtr::~HasPtr(){
    if(--*use==0){
    delete ps;
    ps=nullptr;
    delete use;
    use=nullptr;
    }
}

#endif