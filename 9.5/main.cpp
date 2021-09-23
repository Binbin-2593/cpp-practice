#include<iostream>
#include<vector>

using namespace std;

bool search_v(vector<int>::iterator beg,vector<int>::iterator end,int val)
{
    for (; beg != end;++beg){
        if (*beg==val)
            return true;//注意return的功能，当执行return时此函数就终止了
    }
    return false;
}

int main(){
    int a = 5, b = 9;
    vector<int> ilist = {1, 2, 3, 4, 5, 6, 7, 8};
    cout << boolalpha<<search_v(ilist.begin(), ilist.end(), a) << endl;
    cout << boolalpha<<search_v(ilist.begin(), ilist.end(), b) << endl;

    return 0;
}