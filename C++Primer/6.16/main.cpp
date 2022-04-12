#include<iostream>
#include<string>
//#include<cctype>

using namespace std;

bool check_capitalization (const string &str){
    for(auto c:str){
        if (isupper(c))
            return true;
    }
    return false;
}
string rewrite(string &str){
    for (auto &c:str){
        if (isupper(c)){
            c = tolower(c);
        }
    }
    return str;
}

int main()
{
    string s;
    cout << "输入一个字符串:" << endl;
    getline(cin, s);
    if(check_capitalization(s)){
        cout << "输入的字符串中是否有大写字母：" 
             <<boolalpha<<check_capitalization(s)<< endl;
        cout << "将字符串以小写的形式输出为：" 
             << rewrite(s) << endl;
    }
    else
        cout << "此字符串没有大写字母" << endl;

    return 0;
    
}