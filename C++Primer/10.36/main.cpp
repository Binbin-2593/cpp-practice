#include<iostream>
#include<list>
#include<algorithm>

using namespace std;

int main()
{
    list<int> il = {1, 2, 3, 4, 5, 0, 6, 0, 4, 0, 3, 0, 2, 0, 4111, 5, 3};
    auto zero_it = find(il.crbegin(), il.crend(), 0);
    cout << *(--zero_it) << endl;
    return 0;
}