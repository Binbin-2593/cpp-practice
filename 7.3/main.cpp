#include<iostream>
#include<string>
#include "Sales_data.h"

using namespace std;

int main(){
    cout << "输入交易记录（ISNB、销售量、原价、实际售价）：" << endl;
    Sales_data total;
    if(cin >> total){
        Sales_data trans;
        while(cin >> trans){
            if(total.isbn()==trans.isbn()){
                total.combine(trans);
            }
            else{
                cout <<"汇总后的数据（ISNB、销售量、原价、实际售价）：" <<"\n"<<total << endl;
                total = trans;
            }

        }
        cout <<"汇总后的数据（ISNB、销售量、原价、实际售价）："  <<"\n"<<total << endl;
    }
    else{
        cerr << "No data!" << endl;
        return -1;
    }
    return 0;
}
