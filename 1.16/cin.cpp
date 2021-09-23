#include<iostream>
//cin 读取缓冲区不定数量的一组数

int main()
{
    int v=0,sum=0;
    std::cout <<"Enter a set of numbers,press Ctrl+D to end："<<std::endl;
//键入Ctrl+D用来告诉计算机输入结束了
    while( std::cin>>v)
         sum+=v;
    std::cout<<"The sum of the data read is :"
             <<sum<< std::endl;
    return 0;         

}