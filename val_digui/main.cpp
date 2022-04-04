#include<iostream>
using namespace std;
int leijia(int a){
    ++a;
    return a;
}
int dijian(int a){
    --a;
    return a;
}
int main(){
    int b = 5;
    leijia(b);
    cout<<dijian(b)<<endl;
return 0;
}