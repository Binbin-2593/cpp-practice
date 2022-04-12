#include<iostream>
#include<vector>
#include<string>
#include<fstream>
#include<algorithm>

using namespace std;

//产生一个txt文件
void file(){
    ofstream out("file.txt",ofstream::out);
    out << "I am also a complicated animal I carry a sentence on my mouth but I keep repeating it in my heart" << endl;
    out.close();
}

int main() {
    file();
    ifstream in("file.txt");
    istream_iterator<string> iter(in),eof;
    vector<string> sv(iter, eof);
    sort(sv.begin(), sv.end());
    for (auto j : sv)
        cout << j << " ";
    cout << endl;

    return 0;
}