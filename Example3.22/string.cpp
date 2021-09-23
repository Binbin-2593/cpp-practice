#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){
    /*string s;

    cin >> s;//cin就是读取缓冲区的内容的，所以cin之前一定在缓冲区有内容的输入
    cout << s << endl;*/
    //跑第二段，第一段要被注释掉，应为cout<<s把hello输出之后缓冲区就没有hello了只剩下了word

    /*string s1,s2;
    cin >> s1 >> s2;
    cout << s1 << s2 << endl;*/

   /* string word;
    while(cin>>word)
        cout << word << endl;
    */

    string line;
    while(getline(cin,line))//1.可以看到getline有两个参数分别是输出流和string对象，注意位置
    //2.getline函数像cin一样返回流参数
        cout << line << endl;
    

    return 0;
}