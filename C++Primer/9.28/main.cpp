#include<iostream>
#include<string>
#include<forward_list>

using namespace std;

void f(forward_list<string> &sfl,const string&s1,const string&s2)
{
    auto prev = sfl.before_begin();
    auto curr = sfl.begin();
    bool inserted = false;

    while(curr != sfl.end()){
        if(*curr == s1){
            curr = sfl.insert_after(curr, s2);
            inserted = true;
        }
        prev = curr;
        ++curr;//18、19句是一起使用的
    }
    if(!inserted)
        sfl.insert_after(prev, s2);

}

int main()
{
    forward_list < string > cppp= {"hello", "cpp", "primer","cpp"};

    f(cppp, "hello", "你好");
    for (auto curr = cppp.cbegin(); curr != cppp.cend(); ++curr)
        cout << *curr << " ";
    cout << endl;

    f(cppp, "cpp", "!");
    for (auto curr = cppp.cbegin(); curr != cppp.cend(); ++curr)
        cout << *curr << " ";
    cout << endl;

    f(cppp, "hh", "?");
    for (auto curr = cppp.cbegin(); curr != cppp.cend(); ++curr)
        cout << *curr << " ";
    cout << endl;

    return 0;
}
