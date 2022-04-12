#include<iostream>
#include<vector>
#include<cstddef>


using namespace std;

int main(){
    constexpr size_t sz = 10;
    int a[sz];
    vector<int> b;

    for (size_t i = 0;i < sz;++i)
        a[i] = i * i + 4;
    for(auto j:a)
        cout << j << " ";
    cout << endl;
    /*
    for (size_t i = 0; i < sz;++i)
        b.push_back(a[i]);
    
    auto beg=b.begin(),end=b.end();

    for (;beg!=end;++beg)
        cout << *beg << endl;
        */

    
    vector<int> c(begin(a), end(a));//用数组的begin和end直接初始化vector对象
    for(auto val :c)
       cout << val<< endl; 

    return 0;
}