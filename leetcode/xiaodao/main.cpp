/*
 * @Author: your name
 * @Date: 2022-03-16 12:44:33
 * @LastEditTime: 2022-04-12 15:17:36
 * @LastEditors: Please set LastEditors
 * @Description: 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 * @FilePath: /exercises/leetcode/xiaodao/main.cpp
 */
#include<iostream>
#include<vector>
#include<stack>
#include<utility>


using namespace std;


class Solution {
    vector<int> d={-1, 0, 1, 0, -1};
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        if(grid.empty()) return 0;
        int m = grid.size(),n=grid[0].size(),area=0;
        for(int i=0;i<m;++i){
            for (int j = 0;j<n;++j){
                if(grid[i][j]!=0){
                    area = max(area, dfs(grid, i, j));
                }
            }
        }
        return area;
    }

    int dfs(vector<vector<int>>& grid,int r,int c){
        grid[r][c] = 0;
        int local_area = 1, x, y;
        for (int k = 0; k < 4;++k){
            x = r + d[k], y = c + d[k + 1];
            if(x>=0&&x<grid.size()&&y>=0&&y<grid[0].size()&&grid[x][y]!=0)
                local_area += dfs(grid, x, y);
        }
        return local_area;
    }
};


int main(){
    vector<vector<int>> grid = { { 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0 }, { 0, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 0, 0 }, { 0, 1, 0, 0, 1, 1, 0, 0, 1, 1, 1, 0, 0 }, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0 }, {0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0 } };
    Solution s;
    cout<<s.maxAreaOfIsland(grid)<<endl;
    return 0;
}