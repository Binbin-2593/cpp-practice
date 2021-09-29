#ifndef MY_STRBLOB_H
#define MY_STRBLOB_H 
#include<vector>
#include<string>
#include<initializer_list>
#include<memory>
#include<stdexcept>

using namespace std;

class StrBlob{
public:
    typedef vector<string>::size_type size_type;
    StrBlob();
    StrBlob(initializer_list<string> il);
    size_type size() const { return data->size(); }
    bool empty() const { return data->empty(); }
    void push_back(const string&t){return data->push_back(t);}
    void pop_back();
    string &front();
    const string &front() const;
    string &back();
    const string &back() const;

private:
    shared_ptr<vector<string>> data;
    //if data[i]不合法，抛出一个异常
    void check(size_type i,const string&s) const;
};
StrBlob::StrBlob():data(make_shared<vector<string>> ()){}
StrBlob::StrBlob(initializer_list<string> il):data(make_shared<vector<string>>(il)){}

void StrBlob::check(size_t i,const string& s) const{
    if(i>=data->size())
        throw out_of_range(s);
}

string& StrBlob::front(){
    check(0, "front on empty StrBlob");
    return data->front();
}

const string& StrBlob::front() const{
    check(0, "front on empty StrBlob");
    return data->front();
}

string& StrBlob::back(){
    check(0, "back on empty StrBlob");
    return data->back();
}

const string& StrBlob::back() const{
    check(0, "back on empty StrBlob");
    return data->back();
}

void StrBlob::pop_back(){
    check(0, "pop_push on empty StrBlob");
    return data->pop_back();
}
# endif
