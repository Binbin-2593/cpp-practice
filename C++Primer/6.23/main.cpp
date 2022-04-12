#include<iostream>

using namespace std;

void print1(const int *p){
    cout << *p << endl;
}

void print2(const int *p,size_t sz){
    for (int i = 0; i < sz;++i){
        cout << *p++ << endl;
    }
}

void print3(const int *b,const int *e){
    while (b!=e){
        cout << *b++ << endl;
    }
}

int main(){
    int i = 0,j[5]={1,2,3,4,5};
    print1(&i);
    cout << " " << endl;
    print1(j);
    cout << " " << endl;

    auto b=begin(j);
    auto e=end(j);

    print2(j, e-b);
    cout << " " << endl;
    print3(b,e);
    return 0;
}