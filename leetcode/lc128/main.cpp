/*
 * @Author: your name
 * @Date: 2022-04-05 15:08:50
 * @LastEditTime: 2022-04-06 16:12:35
 * @LastEditors: Please set LastEditors
 * @Description: 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 * @FilePath: /exercises/lc128/main.cpp
 */

#include <iostream>
#include<vector>
#include<unordered_set>

using namespace std;

class Solution {
    public:
        int longest(vector<int>& nums){
            unordered_set<int> us(nums.begin(),nums.end());

            int ans = 0;
            while(!us.empty()){
                int cur = *us.begin();
                us.erase(cur);
                int next = cur + 1, prev = cur - 1;
                while(us.count(next)){
                    us.erase(next);
                    ++next;
                }
                while (us.count(prev)){
                    us.erase(prev);
                    --prev;
                }

                ans = max(ans, next - prev - 1);
            }
            return ans;
        }
};

int main(){
    char a;
    vector<int> nums1 = {0, 3, 7, 2, 5, 8, 4, 6, 0, 1}, nums2 = {100, 4, 200, 1, 3, 2};
    Solution s;
    cout << "longest of nums1: " << s.longest(nums1) << endl;
    cout << "longest of nums2: " << s.longest(nums2) << endl;
    cout<<a << endl;

    return 0;
}
