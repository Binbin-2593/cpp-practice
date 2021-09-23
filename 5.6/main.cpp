#include<iostream>
#include<string>

using namespace std;
int main(){
    int grade;
    cout << "请输入你的分数：" << endl;
    cin >> grade;
    if (grade<0||grade>100){
        cout << "输入分数错误" << endl;
        return -1;
    }
    if(grade==100){
        cout<<"你的成绩是："<<"A++"<<endl;
        return -1;
    }
    if(grade<60){
        cout << "你的成绩是："
             << "F" << endl;
        return -1;     
    }

    int iU = grade / 10;
    int iT = grade % 10;
    string score, level, lettergrade;

    
    score = (iU == 9) ? "A" : (iU == 8) ? "B"
                          : (iU == 7)   ? "C"
                                        : "D";

    
    level = (iT < 3) ? "-" : (iT > 7) ? "+"
                                      : "";

    lettergrade=score+level;
    cout << "你的成绩是：" << lettergrade << endl;

    return 0;
}