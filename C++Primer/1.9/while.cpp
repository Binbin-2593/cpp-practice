#include <iostream>

int main()

{
    int sum=0,v=50;
    //循环中需要的变量，要在进入循环体之前定义并根据需求进行初始化

    while(v<=100){
         sum+=v;
         ++v;
    }

    std::cout <<"Sum of 50 to 100inclusive is :"
              << sum << std::endl;
    return 0;
}