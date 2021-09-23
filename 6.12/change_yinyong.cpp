#include<iostream>
using namespace std;

void change (int &i,int&j){
    int h = i;
    i = j;
    j = h;
}

int main (){
    int a = 1, b = 2;
    cout << "交换前a为：" << a << "，b为：" << b << endl;
    change(a, b);
    cout << "交换后a为：" << a << "，b为：" << b << endl; 

    return 0;
}
