#include<iostream>

using namespace std;

int main()
{
    constexpr size_t n = 10;

    int a[n];
    /*for (auto &i :a)//这里不能使用范围for，不知道为啥
       a[i]=i;*///错了这里的i是引用
       

    for (size_t i = 0; i <= n;++i)
       a[i]=i;
    for (auto i :a)
        cout <<a[i]<<" ";
    cout << endl;

    return 0;
}