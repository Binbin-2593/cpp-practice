#include<iostream>
#include<string>
#include"HasPtr.h"

using namespace std;

void out(HasPtr&h){
   cout<<h.get_s()<<" "<<h.get_i()<<" "<<h.get_si()<<endl;
   return;
}

int main(int argc, char**argv)
{
    HasPtr a("hhhhhh"); out(a);

    HasPtr b(a); out(a); out(b);

    HasPtr c = b; out(a); out(b); out(c);

    c= "wwwwww"; out(c);
    cout << *c << endl;

    return 0;
}