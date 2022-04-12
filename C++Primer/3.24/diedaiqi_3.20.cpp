#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> a;
    int b,sum;

    cout << "输入一组偶数个整数,以ctrl+d结束：" << endl;

    while (cin>>b)
        a.push_back(b);
    for (auto it = a.begin(); it != a.end();it+=2){//注意：1.a.end()和a.size()对元素位置的体现有差别。2.注意i++在整个for循环中运行的逻辑顺序
        sum = *it + *(it+1);
        cout << "相邻两个整数的和为："<<sum << endl;
    }


    /*for (auto it = a.begin(), it1 = a.end() - 1; it < it1; it++, it1--) 
    {
        sum = *it + *it1;
        cout << "对称两个整数的和为："<<sum << endl;
    }*/
    auto be = a.begin();
    auto en= a.end();
    for (auto it = be; it != be + (en - be) / 2;it++){
        sum = *it + *(be + (en - it) - 1);
        cout << "对称两个整数的和为："<<sum << endl; 
    }

return 0;

}