#include<iostream>
#include<cstring>

using namespace std;

int main(){

    char a[80], b[80];

    cout << "输入两个字符串" << endl;
    cin >> a >> b;

    auto result = strcmp(a, b);
   /* switch(result){
        case 1:
            cout << "第一个字符串大" << endl;
            break;
        case -1:
            cout << "第二个字符串大" << endl;
            break;
        case 0:
            cout << "两个字符串一样大" << endl;
            break;
        default:
            cout << "结果未定义" << endl;
            break;
        }*/
    if (result>0)
       cout << "第一个字符串大" << endl;
    else if (result<0)
       cout << "第二个字符串大" << endl;
    else if(result==0)
        cout << "两个字符串一样大" << endl;
    else
        cout << "未定义" << endl;

    return 0;
}