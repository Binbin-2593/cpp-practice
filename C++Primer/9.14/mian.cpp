#include<iostream>
#include<vector>
#include<list>
//#include<string>

using namespace std;

int main()
{
    list<char *> slist = {"hello", "cpp", "primer"};
    vector<string> vec;
    vec.assign(slist.begin(), slist.end());

    cout << vec.capacity() << " " << vec.size() << " " << vec[0] << " " << vec[vec.size() - 1] << endl;

    return 0;
}