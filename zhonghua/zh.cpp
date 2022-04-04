#include<vector>

using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int k = flowerbed.size();
        int m = 0;
        if(flowerbed[0]==0&&flowerbed[1]==0)
            ++m;
        if(flowerbed[k-1]==0&&flowerbed[k-2]==0)
            ++m;

        for (int i = 0; i < k-2; )
        {//不能搞连等号
            if (flowerbed[i]==1&&flowerbed[i+1]==0&&flowerbed[i+2]==0&&flowerbed[i+3]==0){
                ++m;
                flowerbed[i + 2] = 1;
                i = i + 2;
            }
            else
                ++i;
            // else if(i>1&&flowerbed[i-2]==1){}
        }
    return m>=n;
    }
};

int main(){
    vector<int> a = {1, 0, 0, 0, 1};
    int n = 2;
    Solution s;
    s.canPlaceFlowers(a, n);

    return 0;
}