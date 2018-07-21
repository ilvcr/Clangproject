/*************************************************************************
> File Name: c2_4.h
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月21日 星期六 22时47分44秒
> Description:   c2_4.h 线性表的双向链表存储结构
 ************************************************************************/

/*
#ifndef _C2_4_H
#define _C2_4_H
#endif
*/

typedef struct DuLNode{
    ElemType data;
    struct DuLNode* prior;
    struct DuLNode* next;
}DuLNode, *DuLinkList;



