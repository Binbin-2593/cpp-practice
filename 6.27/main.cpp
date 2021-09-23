#include<iostream>
#include<list>
using namespace std;

int icount(initializer_list<int> il){
    int count = 0;
    for(auto i:il){
        count+=i;
    }
    return count;
}

int main(){
    //必须以列表初始化的方式将实参传入iCount函数
    /*int a = 0;
    list<int> li1;
    cout << "输入一串数字：" << endl;
    while (cin >> a)
    {
        li1.push_back(a);
    }

    cout << "这串数字的和为：" << icount(li2) << endl;
    */
    //因为initializer_list的列表中的元素都是const，所以实参必须字面值列表

    cout << "4，5，6，7，8的和为：" << icount({4, 5, 6, 7, 8}) << endl;
    return 0;
}