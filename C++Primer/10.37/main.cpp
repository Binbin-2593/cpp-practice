#include<iostream>
#include<vector>
#include<list>
#include<string>
#include<algorithm>

using namespace std;

int main(){

    vector<string> sv = {"qw", "qe", "qr", "qt", "qy", "qu", "qi", "qo", "qp"};
    list<string> sl;
    copy(sv.rbegin() + 2, sv.rend() - 2, back_inserter(sl));
    for(auto j:sl)
        cout << j << " ";
    cout << endl;
    return 0;
}