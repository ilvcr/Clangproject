/*************************************************************************
> File Name: modifyappend.c
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: Thu Apr  4 20:20:19 2019
> Description: 修改append函数，利用此函数实现：
                两个非降序链表的并集1->2->3和2->3->5并为1->2->3->5
                只能输出结果，不能修改两个链表的数据
 ************************************************************************/

#include<stdio.h>

Node* head(Node* h1, Node* h2) {

    if(h1 == NULL) return h2;
    if(h2 == NULL) return h1;

    Node* head;

    if(h1->data < h2->data) {
        head = h1;
        h1 = h1->next;
    }else {
        head = h2;
        h2 = h2->next;
    }

    Node* p = head;
    while(h1 != NULL || h2 != NULL) {
        Node* candi;

        if(h1 != NULL && h2 != NULL && h1->data < h2->data || h2 == NULL) {
            candi = h1;
            h1 = h1->next;
        }else{
            candi = h2;
            h2 = h2->next;
        }
    }
    if(candi->data == p->data) free(candi);
    else{
        p->next = candi;
        p = candi;
    }

    return head;
}




