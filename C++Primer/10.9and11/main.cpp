#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;


void elimDups(vector<string> &words)
{
    sort(words.begin(), words.end());
    auto end_unique = unique(words.begin(), words.end());
    words.erase(end_unique, words.end());
    
}
bool isShorter(const string& s1, const string& s2)
{
    return s1.size() < s2.size();
}

int main()
{
    vector<string> sve = {"learn", "the", "cpp", "primer", "cpp", "the", "!", "?", "!"};
    elimDups(sve);
    stable_sort(sve.begin(), sve.end(), isShorter);
    for (auto j : sve)
        cout<<j<<" ";
    cout << endl;
    return 0;
}
