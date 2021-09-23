//统计输入中每个值出现的次数

#include<iostream>

int main()
{
    int currentval=0,val=0;
    //currentval是正在统计的数，val是当前读取的数
    std::cout <<"Enter a set of numbers,press Ctrl+D to end："<<std::endl;
    if(std::cin>>currentval){
        int cnt=1;//计数

        while(std::cin>>val){
            if(currentval==val)
              ++cnt;
            else {
                std::cout <<currentval<<" occurs "<<cnt<<" times"<<std::endl;
                currentval=val;
                cnt=1;
            }
        }
        std::cout <<currentval<<" occurs "<<cnt<<" times"<<std::endl;//最后一个数的计数 
    }
    return 0;
}