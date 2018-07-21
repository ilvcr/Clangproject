/*************************************************************************
> File Name: c2_2.h
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月21日 星期六 22时43分42秒
> Description:  c2_2.h 线性表的单链表存储结构
 ************************************************************************/

/*
#ifndef _C2_2_H
#define _C2_2_H
#endif
*/

struct LNode{
    ElemType data;
    struct LNode* next;
};
typedef struct LNode* LinkList;  /* 另一种定义LinkList的方法 */


