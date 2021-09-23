#include<iostream>
#include<string>
#include<vector>
#include<cctype>

using namespace std;

int main(){
    vector<string> sentence;
    string word;

    cout << "请输入一组词，键入ctrl+d来结束：" << endl;

    while(cin>>word){
        sentence.push_back(word);
    }
    //这里需要一层一层地往下遍历，第一个for到vector的元素，第二个for在对元素进行操作
    for(auto &mem : sentence){
        for(auto &a :mem)
           a = toupper(a);//cctype中的那些函数的参数是字符，不是字符串
        cout << mem << " " << endl;

    }

    return 0;
}