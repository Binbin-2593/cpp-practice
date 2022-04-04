#include<iostream>
#include<vector>

using namespace std;

// class Solution {
// public:
//     vector<int> findDisappearedNumbers(vector<int>& nums) {
//         vector<int> ans;
//         //由于本题的特殊性：数组中的数字和数组下标有某种联系
//         //可想到发现散列函数，解决问题
//         for(auto &num:nums){
//             int pos = abs(num) - 1;
//             if(nums[pos]>0)
//                 nums[pos] = -nums[pos];
//         }//由n个属于1～n的整数的特殊性

//         for (int i = 0;i<nums.size();++i){
//             if(nums[i]>0)
//                 ans.push_back(i + 1);
//         }
//         return ans;
        
//     }
// };

// int main(){
//     vector<int> v1 = {4, 3, 2, 7, 8, 2, 3, 1};
//     Solution solution;
//     vector<int> v2=solution.findDisappearedNumbers(v1);
//     for(auto i:v2){
//         cout << i << " ";
//     }
//     cout << endl;
//     return 1;
// }


int main(){
    
}