#include<iostream>
#include<vector>
#include<memory>

using namespace std;

//注意shared_ptr的定义使用方式像容器，没有*
shared_ptr<vector<int>> sp_vector(void){
    return make_shared<vector<int>>();
}

void read_ints(shared_ptr<vector<int>> p){
    int v;
    while(cin >> v)
        p->push_back(v);
}

void print_ints(shared_ptr<vector<int>>p){
    for (const auto &i:*p)
        cout << i<<" ";
    cout << endl;
}

int main(int argc, char**argv)
{
    auto p = sp_vector();
    
    //对比12.6不需要delete处理
    read_ints(p);
    print_ints(p);

    return 0;
}