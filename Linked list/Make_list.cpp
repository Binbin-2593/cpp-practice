#include<iostream>
#include<list>

using namespace std;

class listNode{
    public:
        int n_key;
        listNode *next;
};

void createList(listNode *pHead){
    listNode *p = pHead;
    for (int i = 1; i < 10; ++i)
    {
        listNode *pNewNode=new listNode;
        pNewNode->n_key = i;
        pNewNode->next = nullptr;
        p->next = pNewNode;
        p = pNewNode;
    }
}

void printList(listNode *pHead){
    listNode *p=pHead;
    while(p){
        cout << p->n_key << " " ;
        p=p->next;
    }
    cout << endl;
}

int main()
{
    listNode *head=new listNode;//初始化一个空链表
    //让链表head的头节点的指针指向NULL，创建一个带有头指针的单链表
    head->n_key = 9;
    head->next=nullptr;

    createList(head);
    printList(head);

    //到这里我们会发现，单链表同vector一样本质上还是存储数据的一个容器（结构）
    //只是各个类的封装内容及对数据的操作的细节有所差异，大体思想相通
}












