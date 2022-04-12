#include<iostream>
#include<vector>
#include<map>
#include<string>
#include<algorithm>

using namespace std;

void add_family (map<string,vector<string>> &families,const string &family)
{
    if(families.find(family) == families.end())
        families[family] = vector<string>();
}

void add_child(map<string,vector<string>> &families,const string &family,const string &child)
{
    families[family].push_back(child);
}

int main(int argc, char *argv[])
{
    map<string, vector<string>> families;
    add_family(families, "王");
    add_child(families, "王", "刚");
    add_child(families, "王", "二");
    add_family(families, "李");
    add_child(families, "李", "四");
    add_child(families,"赵","一");

    for(auto f:families){
        cout << f.first << "家的孩子:";
        for (auto i : f.second)
            cout<<i<<" ";
        cout << endl;
    }
    return 0;
}