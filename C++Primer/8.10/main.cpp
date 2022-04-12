#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include<fstream>

using namespace std;

int main()
{
    ifstream in("file.txt", ifstream::in);
    if(!in){
        cerr << "无法打开文件" << endl;
        return -1;
    }

    string line;
    vector<string> words;
    while(getline(in,line)){
        words.push_back(line);
    }
    in.close();
    
    vector<string>::const_iterator it =words.begin();
    while(it != words.end()){
        istringstream line_str(*it);
        string w;
        while(line_str>>w){
            cout << w << " ";
        }
        cout << endl;
        ++it;
    }
    return 0;
}