#include<iostream>
#include<map>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    // map<string, int> si;
    // si["a"] = 1;
    // si["b"] = 2;
    // si["e"] = 3;
    // for (auto& i:si){
    //     cout<<i.first<<endl;
    //     cout<<i.second<<endl;
    // }

    // vector < int >a= {1, 2, 3, 4, 5, 6, 7, 8};
    // class Comp{
    //     public:
    //         bool operator()(int& p1,  int& p2){
    //             return p1> p2;
    //         }
    // };
    // sort(a.begin(), a.end(), Comp());
    // for(auto& i:a){
    //     cout << i << " ";

    // }

    // cout << "*************"
    //      << " ";
    // int a = 1,c=42;
    // double b = 0.84729;
    // cout << static_cast<int>(a * b) << " ";
    // cout << a/c << " ";
    // cout << endl;
    string s = "mtime,AJ,BW,CF,CM,CQ,CW,CZ,DO,DV,ER,EZ,FM,FO,GJ,HQ,IN,IR,IT,JL,JQ,JY,NP,NT,OQ,PT,PY,RW,SU,TX,TY";
    cout << count(s.begin(),s.end(),',') << endl;
    return 0;
}