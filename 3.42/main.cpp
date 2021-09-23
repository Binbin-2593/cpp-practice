#include<iostream>
#include<vector>
#include<cstddef>

using namespace std;

int main(){
    vector<int> a;
    constexpr size_t sz = 10;
    int b[sz];


    for (int i = 0; i < 10; ++i)
    {
        a.push_back(i * i + 4);
        cout << a[i] << " ";
    }
    cout << endl;
    
    /*
    for(int j = 0;j < sz;++j){
        b[j]=a[j];
        cout << b[j] << endl;
    }
    */
    //使用迭代器
    auto it = a.cbegin();
    for(auto &j : b){
        j = *it;
        cout<<j<<endl;
        ++it;
    }

    return 0;
}