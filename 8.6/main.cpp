#include<iostream>
#include <fstream>
#include"Sales_data.h"

using namespace std;

void file(){
    ofstream out("file.txt",ofstream::out);
    out << "wwwww 20 100 98" << endl;
    out << "wwwww 30 100 95"<<endl;
    out << "hhhhh 40 200 180"<<endl;
    out << "ggggg 60 2300 210"<<endl; 
    out.close();
}

int main(int argc, char *argv[])
{
    file();
    if (argc != 2)
    {
        cerr << "请给出文件名" << endl;
        return -1;
    }
    ifstream in(argv[1]);
    if(!in){
        cerr << "无法打开输入文件" << endl;
        return -1;
    }

    Sales_data total;
    if(read(in,total)){
        Sales_data trans;
        while(read(in,trans)){
            if(total.isbn()==trans.isbn())
                total.combine(trans);
            else{
                print(cout, total) << endl;
                total = trans;
            }
        }
        print(cout, total) << endl;
    }else{
        cerr << "没有数据" << endl;
    }
    return 0;
}