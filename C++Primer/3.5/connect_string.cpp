#include<iostream>
#include<string>

using namespace std;

int main(){
    string s, result;
    char t = 'q';

    cout << "请输入一个字符串：" << endl;
    while(cin>>s){
        result += s;
        cout << "请继续输入下一个字符串（或者输入q结束输入）：" << endl;
        cin >> t;
        if (t=='q')
            break;
    }
    cout << "最后拼接成的字符串是：" << result << endl;

    return 0;
}