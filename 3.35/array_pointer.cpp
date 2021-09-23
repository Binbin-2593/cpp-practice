#include<iostream>
#include<cstddef>

using namespace std;

int main(){

    constexpr size_t sz = 10;
    int a[sz];
    for (size_t i = 0;i<sz;++i)
        a[i] = i*i+ 1;
    for (auto j :a)
        cout << j << " ";
    cout << endl;

    int *pb=begin(a),*pe=end(a);
    /*int *pb = a, *pe =a + sz;*/
    while (pb <pe){
        *pb = 0;
        ++pb;
    }

    for (auto j :a)
        cout << j << " ";
    cout << endl;


    return 0;
}