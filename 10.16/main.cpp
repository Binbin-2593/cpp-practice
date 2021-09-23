#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<algorithm>
#include"make_plural.h"

using namespace std;

//打印vector元素
inline void output_words(vector<string> &word)
{
    for (auto iter = word.begin(); iter != word.end(); ++iter)
        cout << *iter << " ";
    cout << endl;
}

//将words按字典顺序排列，并删除重复单词
void elimDups(vector<string> &words)
{
    sort(words.begin(), words.end());
    auto end_unique = unique(words.begin(), words.end());
    words.erase(end_unique, words.end());
}

void biggies (vector<string>&words, vector<string>::size_type sz)
{
    elimDups(words);
    //按长度排序，长度相同的按字典排序
    stable_sort(words.begin(), words.end(), [](const string &s1, const string &s2)
                { return s1.size() < s2.size(); });

    //获取一个迭代器，指向第一个满足size()>=sz的元素
    auto wc = find_if(words.begin(), words.end(), [sz](const string &a)
                      { return a.size() >=sz; });

    auto count1 = count_if(words.begin(), words.end(), [sz](const string &a)
                     { return a.size() >= sz; });
    //计算满足size>=sz的元素的数目
    auto count = words.end() - wc;
    cout << count1 << endl;
    cout << count << " " << make_plural(count, "word", "s") << " "
         << "of length"
         << " " << sz << " "
         << "or longer" << endl;
    //打印长度大于等于给定值的单词，每个单词后面接一个空格
    for_each(wc, words.end(), [](const string &s1)
             { cout << s1 << " "; });
    cout << endl;
}
//产生一个txt文件
void file(){
    ofstream out("file.txt",ofstream::out);
    out << "I am also a complicated animal I carry a sentence on my mouth but I keep repeating it in my heart" << endl;
    out.close();
}

int main(int argc,char*argv[])
{
    file();
    ifstream in(argv[1]);
    if(!in){
        cout << "打开输入文件失败！" << endl;
        exit(1);
    }

    vector<string> words;
    string word;
    while(in>>word)
        words.push_back(word);
    biggies(words, 2);

    return 0;
}
