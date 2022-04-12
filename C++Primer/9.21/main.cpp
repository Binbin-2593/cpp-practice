#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<string> svec;
    string s;
    auto iter=svec.begin();
    while(cin>>s){
        iter=svec.insert(iter,s);
        ++iter;
    }
    for(auto iter=svec.begin();iter!=svec.end();++iter)
        cout<<*iter<<endl;
    return 0;
}