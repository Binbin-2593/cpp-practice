#include<iostream>
#include"Employee.h"

using namespace std;

void f1(Employee s){
    cout<<s.get_name()<<":"<<s.get_num()<<endl;
}//每次调用f1都会有一次实参赋值形参的过程，即都会有编号在现有n的基础上加一

void f2(Employee &s){
    cout<<s.get_name()<<":"<<s.get_num()<<endl;
}//引用不会

int main(int argc,char**argv)
{
    Employee a("HHH"), b = a, c = b;
    f1(a);
    f1(b);
    f1(c);
    cout << endl;
    f2(a);
    f2(b);
    f2(c);
    return 0;
}
    