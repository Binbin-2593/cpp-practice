#include<iostream>
#include <string>
#include <vector>
#include<algorithm>
#include<functional>//(1)

using namespace std;
using namespace std::placeholders;//(2)

bool check_size(const string&s,string::size_type sz)//(3):函数定义
{
    return s.size() <sz;
}

void biggies(vector<int>&vc,const string&s)//（4):主调函数定义
{
    auto p = find_if(vc.begin(), vc.end(), bind(check_size, s, _1)); //(5):bind调用
    cout << "第" << p - vc.begin() + 1 << "个值" << *p << "大于" << s << "的长度" << endl;
}

int main(){
    vector<int> iv = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    string s1 = "cpp", s2 = "hello", s3 = "java";
    biggies(iv, s1);
    biggies(iv, s2);
    biggies(iv, s3);
    return 0;
}