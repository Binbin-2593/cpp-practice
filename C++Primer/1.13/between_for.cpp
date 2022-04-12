#include<iostream>

int main()
{
std::cout <<"Enter tow numbers: "<<std::endl;

int a=0,b=0;
std::cin>>a >>b;
std::cout <<"The numbers between "<< a <<" and "<< b << " as follows："
              <<std::endl;
if(a<b)
//当循环的变量初始化在for之前初始化更清楚，那么for（）中的第一位置不写
  for(; a<=b;a++)
    std::cout <<b<<std::endl;
else 
  for(; b<=a;b++)
    std::cout <<b<<std::endl;
return 0;
}