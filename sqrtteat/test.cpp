


using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        if(x==0) return 0;
        int low = 1, high = x, mid = 0,sqrt=0;
        while(low<=high){
            mid = (low + high) / 2;
            sqrt=x/mid;
            if(sqrt==mid){
                return mid;
            }else if(sqrt<mid){
                high=mid-1;
            }else{
                low = mid + 1;
            }
        }
        return high;
    }
};
int main(){
    int x = 8;
    Solution s;
    s.mySqrt(x);
    return 1;
}