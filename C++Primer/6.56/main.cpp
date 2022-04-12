#include<iostream>
#include<vector>

using namespace std;

int f1(int a ,int b){
    return a + b;
}
int f2(int a,int b){
    return a - b;
}
int f3(int a,int b){
    return a * b;
}
int f4(int a,int b){
    return a / b;
}

void compute(int a,int b,int(*p)(int,int)){//函数指针形参
    cout << p(a,b) << endl;
}


int main(){
    int i = 9 ,j = 3;
    decltype(f1) *p1 = f1, *p2 = f2, *p3 = f3, *p4 = f4;//用于函数类型指针的定义使用
    vector<decltype(f1) *> s = {p1, p2, p3, p4};
    for(auto p:s){
        compute(i, j, p);
    }
    return 0;
}
    