/*
 * @Author: your name
 * @Date: 2022-04-04 16:36:21
 * @LastEditTime: 2022-04-04 22:05:27
 * @LastEditors: Please set LastEditors
 * @Description: 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 * @FilePath: /exercises/map/main.cpp
 */

#include <iostream>
#include<map>

using namespace std;

// class Comp{
//     public:
//         bool operator()(pair<int,string>&p1,pair<int,string>&p2){
//             return p1.first > p2.first;
//         }
// };
template <class T> struct Comp {
  bool operator() (const T& x, const T& y) const {return x.m<y.m;}
  typedef T first_argument_type;
  typedef T second_argument_type;
  typedef bool result_type;
};

class test{
    public:
        test(int a, string b):n(a),m(b){}
    
        int n;
        string m;
};
int main()
{
    // map< pair<int, string>, string,Comp<pair<int, string>>> mp;
    // mp[{3, "a"}] = "a",mp[{2,"b"}]="b",mp[{1,"c"}]="c";

    map<test, string, Comp<test>> mp;
    mp[{1, "a"}] = "a", mp[{2, "b"}] = "b", mp[{3, "c"}] = "c";
    for (auto &i : mp)
    {
        cout << i.second << " ";
    }
    cout << endl;
    return 0;
}