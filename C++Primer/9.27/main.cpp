#include<iostream>
#include<forward_list>

using namespace std;

int main()
{
    forward_list<int> iflist = {1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 21, 32, 13, 4, 212, 24, 23, 314, 3534, 65};
    forward_list<int>::iterator bbg=iflist.before_begin();//forword_list的程序中必须用到首前迭代器
    auto curr=iflist.begin();
    while(curr!=iflist.end()){
        if(*curr%2!=0)
            curr=iflist.erase_after(bbg);
        else {
            bbg = curr;//每次操作都需要指向当前元素之前一个元素的迭代器
            ++curr;
        }
    }
    for(auto j:iflist)
        cout << j << " ";
    cout << endl;

    return 0;
}