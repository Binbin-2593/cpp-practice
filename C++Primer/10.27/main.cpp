#include<iostream>
#include<vector>
#include<list>
#include<algorithm>

using namespace std;


int main (){
    vector < int >iv= {1, 2, 3, 1, 2, 3, 4, 5, 6, 7, 4, 5, 8, 9, 10};
    list<int> il;
    for (auto i : iv)
        cout << i << " ";
    cout << endl;

    sort(iv.begin(), iv.end());

    unique_copy(iv.begin(), iv.end(), back_inserter(il)); //unique_copy的功能特性要求其很多情况下在sort之后使用
    for(auto i :il)
        cout << i << " ";
    cout << endl;

    auto end_unique = unique(iv.begin(), iv.end());//unique的功能特性要求其很多情况下在sort之后使用
    auto b=iv.begin();
    for (b; b != end_unique; ++b)
        cout << *b << " ";
    cout << endl;

    return 0;
}