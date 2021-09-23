//函数1:既不交换指针所指的值，又不交换指针的值
void  change1(int*p,int*q){
    int *temp = p;
    p = q;
    q=temp;
}
//函数2:交换两个指针的值
void  change1(int *&p,int*&q){//注意应用符放置的位置
    int *temp = p;
    p = q;
    q=temp;
}
//函数3:交换两个指针所指的值
void  change1(int*p,int*q){
    int temp = *p;
    *p = *q;
    *q=temp;
}
