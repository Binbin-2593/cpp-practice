#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> vec;
    int s, c;

    for (int i = 0; i < 6;++i){
        for (s = vec.size(), c = vec.capacity(); s <= c;++s)
            vec.push_back(1);
        cout << "空间：" << vec.capacity() <<"   "<< "元素数：" << vec.size() << endl;
    }
    return 0;
}