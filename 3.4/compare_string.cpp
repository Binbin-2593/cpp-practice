#include<iostream>
#include<string>

/*using std::cin;
using std::cout;
using std::endl;
using std::string;*/
using namespace std;


int main(){
    string s1, s2;

    cin >> s1 >> s2;

    if(s1>=s2)
        cout << s1 << endl;
    else
        cout << s2 << endl;


    if(s1.size()==s2.size())
        cout << "S1 and S2 are equal in length" << endl;
    else if(s1.size()>s2.size())
        cout << "The longer is s1 ：" << s1 << endl;
    else 
        cout << "The longer is s2 ：" << s2 << endl;

    return 0;
}