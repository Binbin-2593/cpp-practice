#include<iostream>
#include<vector>

using namespace std;


//使用内置指针
vector<int>* new_vector(void){
    return new(nothrow) vector<int>; 
}

//使用shared_ptr
shared_ptr<vector<int>> sp_vector(void){
    return make_shared < shared_ptr<vector<int>>();
}
void read_ints(vector<int>*p){
    int v;
    while(cin >> v)
        p->push_back(v);
}

void print_ints(vector<int>*p){
    for (const auto &i:*p)
        cout << i<<" ";
    cout << endl;
}

int main(int argc, char**argv)
{
    vector<int> *ptr = new_vector();
    if(!ptr){
        cout << "内存不足！" << endl;
        return -1;
    }
    read_ints(ptr);
    print_ints(ptr);

    delete ptr;
    ptr = NULL;

    return 0;
}