/*************************************************************************
> File Name: c2_5.h
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月21日 星期六 22时50分21秒
> Description:  c2_5.h 带头结点的线性链表类型
 ************************************************************************/

/*
#ifndef _C2_5_H
#define _C2_5_H
#endif
*/

typedef struct LNode{  /* 结点类型 */
    ElemType data;
    struct LNode* next;
}LNode, *Link, *Position;

typedef struct LinkList{  /* 链表类型 */
    Link head, tail;      /* 分别指向线性链表中的头结点和最后一个结点 */
    int len;              /* 指示线性链表中数据元素的个数 */
}LinkList;


