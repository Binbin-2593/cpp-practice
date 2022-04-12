#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

bool Compare(const string &s)
{
    return s.size() >= 5;
}

int main()
{
    vector<string> sve = {"hello", "cpp", "primer", "python", "java", "word"};
    for (auto &p : sve)
        cout << p << " ";
    cout << endl; 
    auto iter =partition(sve.begin(), sve.end(), Compare);
    for (auto b = sve.begin(); b != iter; ++b)
        cout << *b << " ";
    cout << endl;
    return 0;
}