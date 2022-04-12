#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
    vector<string> sv = {"hello", "cpp", "primer"};
    string s = "hello";
    for (auto r_iter = sv.rbegin(); r_iter != sv.rend(); ++r_iter)
        cout<<*r_iter<<" ";
    cout << endl;

    cout << string(s.rbegin(), s.rend()) << endl;
    cout << string((s.rend()).base(), s.end()) << endl;

    return 0;
}