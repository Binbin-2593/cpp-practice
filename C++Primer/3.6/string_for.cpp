#include<iostream>
#include<string>

using namespace std;

int main(){
    cout << "请输入一个字符串："
         << endl;

    string a;

    //cin >> a;
    getline(cin, a);//读取整行，一enter键结束，getline会把空白符也读取，cin不读取


    for (auto &c :a)//要想修改string对象中元素的值必须要使用引用
        c = 'x';
        
    cout << a << endl;

    return 0;
}