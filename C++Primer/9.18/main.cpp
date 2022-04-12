#include<iostream>
#include<string>
#include<deque>

using namespace std;

int main()
{
    deque<string> ds;
    string word;
    while(cin>>word)
        ds.push_back(word);
    for (auto si = ds.begin(); si != ds.end();++si)
        cout << *si << endl;
    return 0;
}