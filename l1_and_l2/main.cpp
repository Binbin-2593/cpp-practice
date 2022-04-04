#include <iostream>
using namespace std;
//Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
        ListNode* p=l1;//遍历指针
        int n=0,sum=0;
        while(p || l2)
        {
            if(!p)
                p = new ListNode();
            else if(l2 == nullptr)
                l2 = new ListNode();

            sum = p->val + l2->val + n;
            p->val = sum % 10;
            n = sum / 10;

            p = p->next;
            l2 = l2->next;
        }
        if (n == 1)
        {
            // ListNode * ans = l1;
            // while(ans->next)
            // {
            //     ans = ans->next;
            // }
            // ans->next = new ListNode(1);
            p =new ListNode(1);
        }
        return l1;
    }
};

int main(int argc, const char *argv[])
{
    //输入：l1 = [2,4,3], l2 = [5,6,4]
    //输出：[7,0,8]
    //解释：342 + 465 = 807.

    //输入:l1 = [9,9,9,9,9,9,9] l2 = [9,9,9,9]
    //输出:[8,9,9,9,0,0,0,1]
    //解释: 9999999 + 9999 = 10009998
    Solution s;
    ListNode* list11 = new ListNode(9);
    ListNode* list12 = new ListNode(9);
    ListNode* list13 = new ListNode(9);
    ListNode* list14 = new ListNode(9);
    ListNode* list15 = new ListNode(9);
    ListNode* list16 = new ListNode(9);
    ListNode* list17 = new ListNode(9);
    ListNode* list21 = new ListNode(9);
    ListNode* list22 = new ListNode(9);
    ListNode* list23 = new ListNode(9);
    ListNode* list24 = new ListNode(9);

    list11->next = list12;
    list12->next = list13;
    list13->next = list14;
    list14->next = list15;
    list15->next = list16;
    list16->next = list17;
    list21->next = list22;
    list22->next = list23;
    list23->next = list24;

    ListNode *result = new ListNode();
    result->next = s.addTwoNumbers(list11,list21);
    while (result)
    {
        cout << result->val<<endl;
        result = result->next;
    }
    delete(list11);
    delete(list12);
    delete(list13);
    delete(list14);
    delete(list15);
    delete(list16);
    delete(list17);
    delete(list21);
    delete(list22);
    delete(list23);
    delete(list24);
    delete result;
    return 0;
}
