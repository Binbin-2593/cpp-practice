#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<string>

using namespace std;

class Employee{
    private:
        static int n ;
    public:
        Employee() { num = n++; }//默认构造函数
        explicit Employee(const string &);//含参构造函数
        Employee(const Employee &E) { name = E.name; num=n++;}//赋值构造函数
        Employee &operator=(const Employee &E) { name = E.name; num=n++;return *this;}//拷贝赋值运算符

        int get_num() const{return num;}
        const string & get_name()const { return name;}
    private:
        string name;
        int num;
};
int Employee::n = 0;//static类内声明，类外定义

Employee::Employee(const string& s){
    name = s;
    num = n++;
}

#endif