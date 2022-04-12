#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> a,unsigned size){
    if(!a.empty()&&size<a.size()){
        cout << a[size] << endl;
        print(a, size + 1);
    }
}

int main(){
    vector<int> c = {1, 2, 3, 4, 5,6, 7, 8, 9};
    print(c, 0);
    return 0;
}