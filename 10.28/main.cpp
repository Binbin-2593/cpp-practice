#include<iostream>
#include<vector>
#include<list>
#include<algorithm>

using namespace std;

int main()
{
    vector<int> v1 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    list<int>v2,v3,v4;
    copy(v1.begin(), v1.end(), front_inserter(v2));
    copy(v1.begin(), v1.end(), back_inserter(v3));
    copy(v1.begin(), v1.end(), inserter(v4, v4.begin()));
    
    for(auto i:v2)
      cout << i << " ";
    cout << endl;
    for(auto i:v3)
      cout << i << " ";
    cout << endl;
    for(auto i:v4)
      cout << i << " ";
    cout << endl;

    return 0;
}
