#include<iostream>
#include"Sales_item.h"

int main()
{
    std::cout <<"Enter sales record ："<< std::endl;

    Sales_item book;
    while(std::cin>>book){
        std::cout <<"ISBN、Sales volume、Sales and average selling price："<<book <<std::endl;
    }

    return 0;
}