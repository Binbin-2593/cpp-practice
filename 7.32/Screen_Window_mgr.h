#ifndef SCREEN_WINDOW_MGR_H
#define SCREEN_WINDOW_MGR_H 
#include<iostream>
#include<string>

using namespace std;

class Window_mgr
{
    public:
        void clear();
};

class Screen
{
    friend void Window_mgr::clear();
    public:
        Screen() = default;
        Screen(unsigned ht, unsigned wd, char c):height(ht), width(wd), contents(ht *wd, c){}

    private:
        unsigned height = 0,width=0;
        unsigned cursor = 0;
        string contents;
};


void Window_mgr::clear(){
    Screen myScreen(10, 20, 'X');
    cout << "清理之前myScreen的内容是：" << endl;
    cout << myScreen.contents<< endl;
    myScreen.contents = "";
    cout << "清理之后myScreen的内容是：" << endl;
    cout << myScreen.contents << endl;
}
#endif  