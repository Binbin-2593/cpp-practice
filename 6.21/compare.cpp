#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int compare(const int a,const int *p){
    //函数定义中，不用定义初始化形参，直接拿来用，动用函数中才会定义初始化形参对应的实参
    return (a>*p)?a:*p;//简单的分支语句用这种
}


int main(){
    /*srand((unsigned)time(NULL));
    int a[10];
    for (auto &i:a){
        i=rand()%100;
    }
    cout << "输入一个整数：";
    int j;
    cin >> j;
    cout << "你输入的整数与数组首元素中的整数较大的是：" << compare(j, a) << endl;
    cout << "数组的全部元素如下：" << endl;
    for (auto i:a){
        cout << i << " ";
    }
    cout << endl;
*/
    int a,b;
    int *p=&b;
    cout << "输入两个不同的整数：" << endl;
    cin >> a >> b;
    cout << "两个整数中较大的是：" << compare(a, p) << endl;

    return 0;
}