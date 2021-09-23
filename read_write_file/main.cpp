#include <iostream>
#include<fstream>//读写文件需要的头文件
#include<string>

using namespace std;

void write(){
    //1.包含头文件fstream
    //2.创建一个流对象
    ofstream out;
    //3.打开的文件及方式
    out.open("file.txt", ofstream::out);
    //或者2，3合并成一步：ofstream out("file.txt", ofstream::out);
    //4.写入内容
    out << "姓名：张三" << endl;
    out << "性别：男" << endl;
    out << "年龄：20" << endl;
    //5.关闭文件
    out.close();
}

void read(){
    //1.包含头文件fstream
    //2.创建一个流对象
    ifstream in;
    //3.打开文件，并判断是否打开成功
    in.open("file.txt", ifstream::in);
    if(!in.is_open()){
        cout << "文件打开失败" << endl;
        return;
    }
    //4.读取数据
    //方法1
    char buf[1024]={0};//创建一个字符数组
    while(in>>buf){
        cout << buf << endl;
    }
    //方法2
    char buf[1024]={0};
    while(in.getline(buf,buf.sizeof(buf))){
        cout << buf << endl;
    }
    //方法3
    string s;
    while(getline(in>>s)){
        cout << s << endl;
    }

    //5.关闭文件
    in.close();
}

int main(){
    write();
    read();
    return 0;
}