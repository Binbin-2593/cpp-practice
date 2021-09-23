#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> numbers;
    int a,sum;
    cout << "输入偶数个整数,以ctrl+d结束:" << endl;
    
    while(cin>>a)
        numbers.push_back(a);
    for (decltype(numbers.size()) i = 0;i<numbers.size()-1;i+=2){
        sum = numbers[i] + numbers[i + 1];
        cout << "相邻两个数的和为：" << sum << endl;
    }

    for (decltype(numbers.size()) i = 0; i < numbers.size() / 2;++i){
        sum = numbers[i] + numbers[numbers.size() - i-1];
        cout << "对称两个数的和为：" << sum << endl; 
    }
        return 0;
} 