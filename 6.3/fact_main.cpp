#include<iostream>

using namespace std;

long int fact (int val){
    if(val<0)
        return -1;
    int ret = 1;
    for (int i = 1; i <= val;++i){
        ret*=i;
    }
    return ret;
}

int main (){
    int num=0;
    cout << "输入一个整数：" << endl;
    cin>>num;
    cout << "这个整数的阶乘为：" << fact(num) << endl;
    return 0;
}