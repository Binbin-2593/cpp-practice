#include<iostream>
#include<vector>
#include<string>
#include<cctype>

using namespace std;

int main(){
    vector<string> text;
    string s;

    cout << "输入一段字符串，中间键入Enter可输入一个空字符串,以ctrl+d结束：" << endl;
    while(getline(cin,s))//getline对取一句字符，遇空格不停，遇到空字符串结束
        text.push_back(s);
    //getline(cin, s);//此两句代替上两句不行
    //text.push_back(s);
    for (auto it = text.begin(); it != text.end() && !it->empty(); it++)
    {
        for (auto it1 = it->begin();it1!=it->end();it1++)
        //对vector的元素也可以使用迭代器
            *it1 = toupper(*it1);
        cout << *it<<endl;
    }
    return 0;
}