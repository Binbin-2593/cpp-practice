#include<iostream>

using namespace std;

void mySWAP(int *p,int *q){//当只是使用到了自定义函数的功能，而非获取最终结果的值时，使用void返回类型，但不能省略
    int num = *p;
    *p=*q;
    *q = num;
}

int main(){
    int a = 5, b = 8;
    int *r = &a, *s = &b;
    cout << "变换前:a=" << a << ",b=" << b << endl;
    mySWAP(r, s);
    cout << "变换后:a=" << a << ",b=" << b << endl; 
    return 0;
}