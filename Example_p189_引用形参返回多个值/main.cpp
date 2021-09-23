#include<iostream>
#include<string>

using namespace std;


string::size_type find_char (const string &s,char c,string::size_type &occurs){
    auto ret = s.size();
    occurs = 0;

    for (decltype(ret) i = 0; i != s.size(); ++i)
    {

        if (s[i] == c)
        {
           if (ret == s.size())
              ret = i;

           ++occurs;
           }

    }
    return ret;//出现次数通过occurs隐式地返回

}

int main (){
    string s;
    string::size_type ctr = 0;
    cout << "输入一个字符串" << endl;
    getline(cin, s);

    auto index = find_char(s, 'o', ctr);

    cout << "'o'首次出现的位置是：" << index << endl;
    cout << "'o'出现的次数是：" << ctr << endl;

    return 0;
}