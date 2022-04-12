#ifndef PERSON_H
#define PERSON_H
#include<iostream>
#include <string>

using namespace std;

class Persons
{
public:
    Persons() = default;
    Person(const string &name, const string &add)::strName(name),strAddress(add){}
    Person(istream &in) { read(in, *this); }

public:
    string name_back() const { return strName; }//不改变数据成员的值的时候用const
    string addess_back() const { return strAddress; }

private:
    string strName;
    string strAddress;
};

ostream &print(ostream &, const Person &);
istream &read(istream &, Person &);

ostream &print(ostream &out,const Person &per){
    out << per.name_back() << per.address_back();
    return out;
}
istream &read(istream &in, Person &per){
    in>>per.strName>>per.strAddress;
    return in;
}

#endif