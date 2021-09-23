#include<iostream>
#include<vector>
#include<ctime>
#include<cstdlib>

using namespace std;

int main(){
    vector<int> a;
    const int sz = 15;

    srand((unsigned)time(NULL));
    cout << "数组的原始值为：" << endl;

    for (int i = 0;i < sz;++i){
        a.push_back(rand() % 100); //生成一个100内的随机数
        cout<< a[i] << " ";

    }
    cout << endl;
    for(auto &j : a){
        j=(j%2!=0)?j*2:j;
    }
    cout<<"调整后的数组是：" << endl;
    for(auto it=a.cbegin();it!=a.cend();++it){
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}