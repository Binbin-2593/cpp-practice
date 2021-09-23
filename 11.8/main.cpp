#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<algorithm>


using namespace std;

string &trans(string &s)
{
    for (int i = 0;i<s.size();++i){
        if(s[i]>='A'&&s[i]<='Z')
            s[i] -= ('A' - 'a');
        else if(s[i]==','||s[i]=='.')
            s.erase(i,1);
    }
    return s;
}

int main(int argc,char *argv[])
{
    ifstream in(argv[1]);
    if(!in){
        cerr<<"打开输入文件失败"<<endl;
        exit(1);
    }

    vector<string> unique_ward;
    string word;
    while(in>>word){
        trans(word);
        if(find(unique_ward.begin(),unique_ward.end(),word)==unique_ward.end())
            unique_ward.push_back(word);
    }
    for(const auto&w: unique_ward)
        cout << w << " ";
    cout << endl;

    return 0;
}



int* twoSum(int* nums, int numsSize, int target,int*returnSize) {
    int i,j;
    int *result=NULL;
    for(i=0;i<numsSize-1;i++)
    {
        for(j=i+1;j<numsSize;j++)
        {
            if(nums[i]+nums[j]==target)
            {
                 result=(int*)malloc(sizeof(int)*2);
                 result[0]=i;
                 result[1]=j;
                 return result;
            }
        }
    }
    return result;
}

