#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
#include<functional>
#include<numeric>
#include"Sales_data.h"

using namespace std;


inline bool compareIsbn (const Sales_data &lhs, const Sales_data &rhs){
    return lhs.isbn() < rhs.isbn();
}


int main (int argc,char*argv[]){

    vector<Sales_data> vs;
    istream_iterator<Sales_data> in_iter(cin), eof;
   // ostream_iterator<Sales_data> out_iter(cout," ");

    while(in_iter!=eof)
        vs.push_back(*in_iter++);
    if(vs.empty()){
        cerr << "No data!" << endl;
        return -1;
    }

    sort(vs.begin(), vs.end(), compareIsbn);

    auto l = vs.begin();
    while(l!=vs.end()){
        auto item = *l;
        auto r = find_if(l + 1, vs.end(),
                         [item](const Sales_data &item1)
                         { return item1.isbn() != item.isbn(); });

        cout << accumulate(l + 1, r, item) << endl;
        l=r;
    }
    return 0;
}