#include<iostream>
#include<map>
#include<vector>
#include<math.h>

using namespace std;
int beyond_years(vector<double> v1,vector<double> v2){
    double y1 = (v1[1]-v1[0]) / v1[1],y2 = (v2[1]-v2[0])/v2[1];
    for (int i = 1; i < 100; ++i)
    {
        if(v1[1]*pow((1+y1),i)>v2[1]*pow((1+y2),i))
            return i ;
    }
}

int main(){
    vector<double> hf = {10045, 11412.8};
    vector<double> zz = {12003, 12691};
    vector<double> cs = {12142.5, 13270.7};
    vector<double> fs = {10816.5, 12156.5};
    vector<double> jn = {10140.9, 11432}; 
    vector<double> nj = {14817.9, 16355.2};

    cout << "合肥 "<<2021+beyond_years(hf, fs)<<" 年底超过佛山" << endl;
    cout << "合肥 "<<2021+beyond_years(hf, jn)<<" 年底超过济南" << endl;
    cout << "合肥 "<<2021+beyond_years(hf, zz)<<" 年底超过郑州" << endl;
    cout << "合肥 "<<2021+beyond_years(hf, cs)<<" 年底超过长沙" << endl;
    cout << "佛山 "<<2021+beyond_years(fs, zz)<<" 年底超过郑州" << endl; 
    cout << "合肥 "<<2021+beyond_years(hf, nj)<<" 年底超过南京" << endl;
    cout <<hf[1]*pow((1+(hf[1]-hf[0])/hf[1]),5)<< endl;
    cout <<hf[1]*pow((1+(hf[1]-hf[0])/hf[1]),10)<< endl;

    return 0;
}