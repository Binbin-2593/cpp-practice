#ifndef MAKE_PLURAL_H
#define MAKE_PLURAL_H
#include<string>

using namespace std;

string make_plural(size_t ctr,const string& word,const string& ending)
{
    return (ctr > 1) ? word + ending : word;
}
#endif