/*
 * @Author: your name
 * @Date: 2022-04-04 16:22:13
 * @LastEditTime: 2022-04-04 16:35:39
 * @LastEditors: Please set LastEditors
 * @Description: 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 * @FilePath: /exercises/priority_queue/main.cpp
 */
 

#include <iostream>
#include<vector>
//#include<pair>
#include<queue>

using namespace std;

class Comp{
    public:
        bool operator()(pair<int,string>&p1,pair<int,string>&p2){
            return p1.first > p2.first;
        }
};

int main(){
    vector<pair<int, string>> vp={{2,"a"},{1,"b"},{3,"g"},{6,"t"},{7,"v"},{8,"t"}};
    priority_queue<pair<int, string>, vector<pair<int, string>>, Comp> pq(vp.begin(),vp.end()); 
    while (!pq.empty())
    {
        auto it = pq.top();
        cout<<it.first<<","<<it.second<<endl;
        pq.pop();
    }
    
    return 0;
}