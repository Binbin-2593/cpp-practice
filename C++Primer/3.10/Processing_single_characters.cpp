#include<iostream>
#include<string>
#include<cctype>

using namespace std;

int main(){
    string a,c;
    
    cout << "输入一个带符号的字符串，以Enter结束" << endl;

    getline(cin, a);

    for (decltype(a.size()) i = 0; i < a.size();++i){
        if(!ispunct(a[i]))
            c += a[i];
    }

    cout <<c<< endl;

    return 0;
}