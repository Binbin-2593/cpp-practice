#include<iostream>
#include<cstring>

using namespace std;

int main (int argc, char **argv)
{
    const char *c1 = "Hello ";
    const char *c2 = "word";

    //数组名和指针不分
    char *r =new char[strlen(c1)+strlen(c2)+1];
    strcpy(r, c1);//拷贝第一个字符串常量
    strcat(r, c2);//连接第二个字符串常量
    cout << r << endl;
    //如果输出r的地址，使用&r，而r的用法，在c++实现中是输出它指向的内容

    string s1 = "Hello ";
    string s2 = "word";
    strcpy(r, (s1 + s2).c_str());//拷贝链接结果，c_str():转化函数
    cout<<r<<endl;

    delete [] r;

    return 0;
}