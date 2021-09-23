#include<iostream>
#include<string>

using namespace std;

int main(){
    cout << "输入一个字符串,以Enter键结束" << endl;

    string a;
    getline(cin, a);

    decltype(a.size()) index = 0;
    while (index!=a.size()){
        a[index] = 'x';
        ++index;
    }

    cout << a << endl;
    
    return 0;
}