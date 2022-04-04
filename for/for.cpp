#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> a={1,1,1,2,3,4,4,3,5,6};
    for(auto &i : a){
        cout << i << " ";
    }
    cout << endl;
}