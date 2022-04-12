#include<iostream>

int main(){
    int a=1,b=2;
    int *p1=&a;
    std::cout<<"a、b : "<< a <<"、"<< b <<std::endl;
    std::cout<<"p1 : "<<p1<<std::endl;
    *p1=b;
    p1=&b;
    std::cout<<"p1 : "<<p1<<std::endl;
    *p1=3;
    std::cout<<"a、b : "<< a <<"、"<< b <<std::endl;
    return 0;
}