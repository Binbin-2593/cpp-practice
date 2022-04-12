#include<iostream>
#include<list>
#include<forward_list>

using namespace std;

int main()
{
    list<int> ilist = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto iter = ilist.begin();
    while(iter != ilist.end()){
        if(*iter%2!=0){
            iter=ilist.insert(iter,*iter);
            ++iter;++iter;
        }
        else
            iter = ilist.erase(iter);
    }

    for(auto curr = ilist.begin();curr != ilist.end();++curr)
        cout << *curr << " ";
    cout << endl;

    forward_list<int> ifl={0,1,2,3,4,5,6,7,8,9,};
    //ifl.assign(ilist.begin(), ilist.end());

    auto prev = ifl.before_begin();
    auto curr = ifl.begin();

    while(curr != ifl.end()){
        if(*curr%2!=0){
            curr = ifl.insert_after(curr, *curr);
            prev = curr;
            curr++;
        }
        else
            curr = ifl.erase_after(prev);
    }
    for(auto curr = ifl.begin();curr != ifl.end();++curr)
        cout << *curr << " ";
    cout << endl;
    return 0;
}