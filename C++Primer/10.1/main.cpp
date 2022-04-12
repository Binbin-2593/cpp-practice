#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    vector<int> ivec={1,2,3,4,2,3,4,5,4,6,4,7,4,5,4,6,8,4,9,4,5,6};
    auto b = ivec.begin(),
    e = ivec.end();
    cout << "ivec中出现4的次数为：" << count(b, e, 4) << endl;
    return 0;
}