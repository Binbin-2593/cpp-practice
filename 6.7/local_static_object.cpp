#include<iostream>

using namespace std;

unsigned myCnt(){
    static unsigned iCnt = -1;
    ++iCnt;
    return iCnt;
}

int main(){
    cout << "输入任意字符" << endl;
    char ch;
    while(cin>>ch){
        cout << "函数myCnt()执行的次数是：" << myCnt() << endl;

    }

    return 0;
}