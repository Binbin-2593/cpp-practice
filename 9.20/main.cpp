#include <iostream>
#include<list>
#include<deque>

using namespace std;

int main()
{
    list<int> ilist={1,2,3,4,5,6,7,8,9,1,2,13,434,34,43,1,32,3,21,4,4,1,41,22312,312,};
    deque<int> ode;
    deque<int> jde;
    for(auto &i:ilist){
        if(i%2==0)
            ode.push_back(i);
        else
            jde.push_back(i);
    }
    for(auto &j :ode)
        cout << j << " ";
    cout << endl;
    for(auto &j :jde)
        cout << j << " ";
    cout << endl;

    return 0;

}