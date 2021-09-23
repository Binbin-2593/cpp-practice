#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
#include<functional>

using namespace std;

int main(){
    cout << "输入一段整数序列：" << endl;

    istream_iterator<int> iter(cin), eof;
    ostream_iterator<int> oit(cout, " ");
    vector<int> iv;

    while(iter!=eof)
        iv.push_back(*iter++);

    sort(iv.begin(), iv.end());
    copy(iv.begin(), iv.end(), oit);
    cout << endl;

    unique_copy(iv.begin(), iv.end(), oit);

    return 0;
}