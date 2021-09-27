#include <iostream>
#include <map>
#include <fstream>
#include <sstream>
#include <string>
#include <cstdlib>
using namespace std;
/*
in1.txt中的内容
'em	them
cuz	because
gratz	grateful
i	I
nah	no
pos	supposed
sez	said
tanx	thanks
wuz	was
in2.txt中的内容
nah i sez tanx cuz i wuz pos to
not cuz i wuz gratz
*/
ifstream& open_file(ifstream &in, const string &file) {
    in.close();//关闭以防之前已经打开
    in.clear();//清除任何存在的错误
    in.open(file.c_str());
    return in;//此时in要么已经与文件绑定在了一起，要么处于错误的状态
}
int main(int argc, char **argv)
{
    ifstream infile;
    ofstream outfile;
    map<string, string> wordChange;
    string input1 = "in1.txt";
    string input2 = "in2.txt";
    //infile.open(input1.c_str());
    if(!open_file(infile, input1)) cout << "no file" << endl;
    string key, value;
    while(infile >> key >> value) wordChange[key] = value;
    string line, word;
    //ifstream input(input2.c_str());
    ifstream input;
    if(!open_file(input, input2)) cout << "no file" << endl;
    map<string, string>::iterator iter;
    while(getline(input, line)) {
        istringstream stream(line);
        bool flag = true;
        while(stream >> word) {
            iter = wordChange.find(word);//此处不能用下标操作，因为下标操作会把原先没有的键值对加进去
            if(flag) {
                flag = false;
            } else {
                cout << " ";
            }
            if(iter != wordChange.end()) cout << iter->second;
            else cout << word;
        }
        cout << endl;
    }
    infile.close();
    return 0;
}

