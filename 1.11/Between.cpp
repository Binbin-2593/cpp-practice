#include<iostream>

//打印出用户输入的两个整数之间的说有整数

int main()
{
    std::cout <<"Enter tow numbers :"<< std::endl;
    int a=0, b=0;
    std::cin>> a >> b;

    int c=a;
    std::cout <<"The numbers between "<< a <<" and "<< b << " as follows："
              <<std::endl;
    while(c<=b){
        std::cout <<c<<std::endl;
        c++;

    }
return 0;

}
