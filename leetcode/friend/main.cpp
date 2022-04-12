/*
 * @Author: your name
 * @Date: 2022-04-06 16:17:40
 * @LastEditTime: 2022-04-06 16:56:58
 * @LastEditors: Please set LastEditors
 * @Description: 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 * @FilePath: /exercises/leetcode/friend/main.cpp
 */


#include <iostream>
#include<vector>

using namespace std;

class Solution{
public:
    int findCircleNum(vector<vector<int>> &friends){
        int len=friends.size(),count=0;
        vector<bool> visited(len,false);

        //每个元素都作为一次dfs的入口
        for (int i = 0; i < len;++i){
            if(!visited[i]){
                //visited[i]=true;
                dfs(friends, visited, i,len);
                ++count;
            }
        }
        return count;
    }

    //dfs
    void dfs(vector<vector<int>> &friends,vector<bool>&visited,int i,int n){
        visited[i]=true;
        for(int j=0;j<n;++j){
            if(friends[i][j]==1&&!visited[j]){
                // visited[j]=true;
                dfs(friends, visited, j,n);
            }
        }
    }
};

int main(){
    vector<vector<int>> f = {{1, 1, 0}, {1, 1, 0}, {0, 0, 1}};
    Solution s;
    cout << s.findCircleNum(f) << endl;
    return 0;
}