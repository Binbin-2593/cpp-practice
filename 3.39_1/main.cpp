#include<iostream>
#include<string>

using namespace std;

int main(){

    string a, b;
    cout << "输入两个字符串：" << endl;

    cin >> a >> b;

    if(a>b)
        cout << "第一个字符串大" << endl;
    else if(a<b)
        cout << "第二个字符串大" << endl;
    else
        cout << "两个字符串相等" << endl;

    return 0;
}