#include<iostream>

//cout、cin 避免句子过长，进行分段

int main()
{
    std::cout <<"Enter two numbers :";
    std::cout << std::endl;

    int v1=0,v2=0;
    std::cin >> v1;
    std::cin >> v2;

    std:: cout << "The retult of ";
    std::cout << v1 <<"*" << v2 << " is " ;
    std:: cout << v1*v2<<std::endl;

    return 0;


}