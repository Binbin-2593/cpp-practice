#include<iostream>
#include<vector>
#include<list>


using namespace std;

int main()
{
    int ia[] = {0, 1, 1, 2, 3, 5, 8, 12, 55, 89};
    list<int> ilist(begin(ia), end(ia));
    //list<int> ilist(ia,ia+11);
    vector<int> ive;
    ive.assign(ilist.begin(), ilist.end());

    list<int>::iterator liter=ilist.begin();
    vector<int>::iterator viter=ive.begin();
    
    for(;liter!=ilist.end();){
        if(*liter%2!=0)
            liter=ilist.erase(liter);
        else ++liter;
    }
    for(auto&i :ilist){
        cout << i << " ";
    }
    cout << endl;

    for (; viter != ive.end();){
        if(*viter%2==0)
            viter = ive.erase(viter);
        else ++viter;
    }
    for(auto&i:ive)
        cout << i << " ";
    cout << endl;

    return 0;
}
