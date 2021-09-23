#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> a(10);//或者定义一个空a然后push_back(b)
    int b,i=0;
    cout << "输入一串数字，以ctrl+d结束：" << endl;
    while(cin>>b){
            a[i] = b;
            ++i;

    }
    for (auto it1 = a.cbegin();it1!=a.cend();it1++){
        cout << *it1 << endl;
    }
    for (auto it1 = a.begin(); it1 != a.end(); it1++)
        {
            *it1 *= 2;
            cout << *it1 << endl;
        }
    return 0;
}