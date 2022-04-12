/*
 * @Author: your name
 * @Date: 2022-04-04 17:05:04
 * @LastEditTime: 2022-04-04 17:31:26
 * @LastEditors: Please set LastEditors
 * @Description: 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 * @FilePath: /exercises/heap_sort/main.cpp
 */

#include <iostream>
#include <vector>

using namespace std;

class Solution{
    //1.heap_adjust
    void heap_adjust(vector<int>& a,int i,int len){
        while(i*2+1<=len){//判断条件保证调整对象有孩子节点
            int lson = 2 * i + 1,rson=2*i+2;
            int large;
            if(lson<=len&&a[lson]>a[i]){
                large = lson;
            }else{
                large = i;
            }

            if(rson<=len&&a[rson]>a[large]){
                large=rson;
            }

            if(large!=i){
                swap(a[i], a[large]);
                i=large;//检测交换后，会不会引起新的不满足
            }else
                break;
        }
    }

    //2.make_heap
    void make_heap(vector<int>& a,int len){
        for (int i = len / 2; i >= 0;--i){
            heap_adjust(a, i, len);
        }
    }

    //3.heap_sort
    void heap_sort(vector<int>&a){
        int len=a.size()-1;
        make_heap(a, len);
        for (int i = len; i >= 1;--i){
            swap(a[i], a[0]);
            --len;
            heap_adjust(a, 0, len);
        }
    }

    public:
        vector<int> sortArray(vector<int>&num){
            heap_sort(num);
            return num;
        }
};

int main(){
    vector<int> b = {2, 3, 32, 56, 7, 4, 48, 2, 45, 7, 2, 3, 45, 2,  4, 6, 7, 8, 7, 9, 676, 5, 3, 25, 2, 90908, 465};
    Solution s;
    s.sortArray(b);
    //sort(b.begin(), b.end());
    for (auto &i : b)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
