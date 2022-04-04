#include<iostream>

using namespace std;

int main()
{
    int a=0, b=0, c=0,d=0;
    
    for (a = 0; a < 7; ++a)
    {
        if(a==4) continue;
        else {
            for (b = 0; b < 10;++b){
                if(b==4) continue;
                else{
                    for(c = 0;c < 10;++c)
                    {   
                        d = a * 100 + b * 10 + c;
                        if(c==4) continue;
                        else if(d<=666)  
                           cout << a<< b<<c << " ";
                        else break;  
                    }
                    cout << endl;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}