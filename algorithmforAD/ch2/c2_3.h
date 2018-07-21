/*************************************************************************
> File Name: c2_3.h
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月21日 星期六 22时45分53秒
> Description:   c2_3.h 线性表的静态单链表存储结构 
 ************************************************************************/

/*
#ifndef _C2_3_H
#define _C2_3_H
#endif
*/

#define MAXSIZE 100  /* 链表的最大长度 */
typedef struct{
    ElemType data;
    int cur;
}component, SLinkList[MAXSIZE];


