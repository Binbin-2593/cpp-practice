#include <iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    vector<int> a;
    int i;

    cout << "输入一组整数"<< endl;
    while (cin >> i)
    {
        a.push_back(i);
    }
    for (auto n:a){
        cout << n << " ";
    cout << endl;
    }
        return 0;
}