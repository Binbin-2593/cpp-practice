#include<iostream>

using namespace std;

void reset(int &i)
{
    i = 0;
}

int main(){
    int j = 10;
    cout << "j的初始值为：" << j << endl;
    reset(j);
    cout << "j重置后的值为：" << j << endl;
    return 0;
}