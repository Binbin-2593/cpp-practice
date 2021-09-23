#include<iostream>
#include<string>
#include<map>
#include<algorithm>

using namespace std;

int main(){

    map < string, size_t > word_count = {{"a", 8}, {"b", 2}, {"c", 3}, {"d", 4}, {"a", 2}, {"b", 2}, {"b", 2}};
   
   
    for(const auto &w:word_count)
        cout << w.first << "出现了" << w.second << "次" << endl;
    return 0;
}