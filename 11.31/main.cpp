#include<iostream>
#include<string>
#include<map>
#include<algorithm>


using namespace std;

void remove_author(multimap<string,string>&books,const string &author){
    auto pos = books.equal_range(author);
    if(pos.first == pos.second)
        cout<<"没有"<<author<<endl;
    else
        books.erase(pos.first, pos.second);
}

void print_books(multimap<string,string>&books){
    cout << "当前书目录包括：" << endl;
    for(auto &book:books)
        cout << book.first << ",《" << book.second << "》" << endl;
    cout << endl;
}

int main(int argc, char*argv[])
{
    multimap<string, string> books;
    books.insert({"BJ", "Sot-Weed Factor"});
    books.insert({"BJ", "Lost in the Funhouse"});
    books.insert({"金庸", "射雕英雄传"});
    books.insert({"金庸", "天龙八部"});

    print_books(books);

    remove_author(books, "BJ");
    remove_author(books, "张三");
    print_books(books);

    return 0;
}