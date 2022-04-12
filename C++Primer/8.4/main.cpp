#include<iostream>
#include <fstream>
#include<vector>
#include<string>

using namespace std;

int main(){
    ifstream in("data");//打开文件data，之后的数据操作，都在此文件下进行
    if(!in){
        cerr << "无法打开输入文件" << endl;
        return -1;
    }

    string line;
    vector<string> words;
    while (getline(in,line)){
        words.push_back(line);
    }

    in.close();//流对象还存在，但是已经关闭了data文件

    vector<string>::const_iterator it = words.begin();
    while(it != words.end()){
        cout << *it << endl;
        ++it;
    }

    return 0;
}
    