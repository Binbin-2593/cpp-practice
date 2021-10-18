#include<iostream>
#include<cstring>

using namespace std;

int main(int argc, char**argv)
{
    char c;
    char *r = new char[20];
    int l = 0;

    //字符用cin.get(c)，字符串用getline(cin,s)
    while(cin.get(c)){
        if(isspace(c))
            break;
        r[l++] = c;
        if(l==20){
            cout << "已经达到上线" << endl;
            break;
        }
    }
    r[l] = 0;
    cout << r << endl;

    delete[] r;

    return 0;
}