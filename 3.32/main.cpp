#include<iostream>
#include<cstddef>

using namespace std;


int main(){

    constexpr size_t sz = 10; //也可const int sz=10;,但是最好用前者，C++11中数组下标被定义成size_t类型

    int a[sz], b[sz];

    for (size_t i = 0; i < 10;++i)
        a[i] = i;
    for (size_t j = 0; j < 10;++j)
        b[j] = a[j];
    for(auto k:b)
       cout<<k << " ";
    cout << endl;

    return 0;
}