#include<iostream>

using namespace std;

class HtNode{
    int weight;
    int lchild,rchild,parent;
};
int main()
{
    void HuffmanTree(HtNode huffTree[], int W[], int n);
    int WHfNode[] = {5, 2, 9, 11, 5, 3, 7};
    WHfNode.sort();
    int sz = 2 * 7 - 1;
    HtNode h[sz];
    void HuffmanTree(h[sz], WHfNode[], sz);
}

void HuffmanTree(HtNode huffTree[],int W[],int n){
    //初始化
    for(auto &i : huffTree){
        i.parent = -1;
        i.lchild = -1;
        i.rchild = -1;
    }

    for (int j = 0; j < n; ++j)
        huffTree[j].weight = W[j];

    for (int k = n; k < 2 * n - 1;++k){
        
    }
}