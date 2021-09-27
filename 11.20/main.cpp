#include<iostream>
#include<fstream>
#include<map>
#include<string>
#include<algorithm>

using namespace std;

int main(int argc, char*argv[])
{
    ifstream fin(argv[1])
    if(!fin){
        cout << "打开输入文件失败" << endl;
        exit(-1);
    }

    map<string, size_t> word_count;
    string word;
    while(cin>>word){
        auto ret = word_count.insert({word, 1});
        if(!ret)
            ++ret.first->second;
    }
    for(const auto &i:word_count)
        cout << i.first << "出现了" << i.second << "次" << endl;
    return 0;
}
