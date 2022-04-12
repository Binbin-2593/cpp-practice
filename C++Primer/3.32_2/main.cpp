#include<iostream>
#include <vector>

using namespace std;
int main(){

    const int n = 10;
    vector<int> a, b;

    for (int i = 0; i < n;++i)
        a.push_back(i);
    for (int j = 0; j < n; ++j)
        b.push_back(a[j]);
    for(auto k:b)
        cout << k << " ";
    cout << endl;

    return 0;
}
