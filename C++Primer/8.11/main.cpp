#include<iostream>
#include <fstream>
#include <vector>
#include<sstream>
#include<string>

using namespace std;

void file(){
    ofstream out("file.txt",ofstream::out);
    out << "morgan 2015552368 862550123" << endl;
    out << "drew 9735550130"<<endl;
    out << "lee 6095550123 2015550175 8005550000"<<endl;
    out.close();
}

class PersonInfo{
    public:
        string name;
        vector<string> phone;
};

int main()
{
    file();
    ifstream in("file.txt", ifstream::in);
    if(!in){
        cerr << "无法打开文件" << endl;
        return -1;
    }
    /*string s;
    while(getline(in,s)){
        cout << s << endl;
    }*/

    string line ,word;
    vector<PersonInfo> people;
    istringstream record;
    while(getline(in,line)){
        PersonInfo info;
        record.clear();
        record.str(line);
        record>>info.name;
        cout << info.name << endl;
        while (record >> word)
        {
            info.phone.push_back(word);
            cout << word << " " << endl;
            
        }
        people.push_back(info);
    }
    in.close();
    
    return 0;
}