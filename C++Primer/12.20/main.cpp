#include<iostream>
#include<fstream>
#include"StrBlobPtr.h"

using namespace std;
void write(){
    ofstream out;
    out.open("file.txt", ofstream::out);
    out << "a" << endl;
    out << "an" << endl;
    out << "the" << endl;
    out.close();
}

int main(int argc, char** argv)
{
    write();
    ifstream in(argv[1]);
    if(!in){
        cout << "无法打开输入文件" << endl;
        return -1;
    }

    StrBlob b;
    string s;
    while(getline(in,s))
        b.push_back(s);
    for (auto it = b.begin(); neq(it, b.end());it.incr())
        cout << it.deref() << endl;
    return 0;
}