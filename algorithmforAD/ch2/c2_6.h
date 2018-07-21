/*************************************************************************
> File Name: c2_6.h
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月21日 星期六 22时53分35秒
> Description:  c2_6.h 抽象数据类型Polynomial的实现
 ************************************************************************/

/*
#ifndef _C2_6_H
#define _C2_6_H
#endif
*/

typedef struct{     /* 项的表示,多项式的项作为LinkList的数据元素 */
    float coef;     /* 系数 */
    int expn;       /* 指数 */
}term, ElemType;

/* 两个类型名:term用于本ADT,ElemType为LinkList的数据对象名 */



