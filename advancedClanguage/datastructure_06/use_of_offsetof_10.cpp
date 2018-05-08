/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Mon 07 May 2018 11:53:21 PM CST
 @File Name: use_of_offsetof_10.cpp
 @Description:  offsetof宏的实现
************************************************************************/

#include<stdio.h>

#define  offsetof(TYPE, MEMBER)  ((size_t) &((TYPE *)4)->MEMBER)

typedef struct stu1
{
    int a;
    int b;
}stu1;

int main(int argc, char ** argv)
{
    printf("offsetof(stu1, a):\t%d\n", offsetof(stu1, a)-4);

    printf("offsetof(stu1, b):\t%d\n", offsetof(stu1, b)-4);

    return 0;
}


/*

#define  offsetof(TYPE, MEMBER)  ((size_t) &((TYPE *)0)->MEMBER)

1->
    通过((TYPE *)0)将0地址强制转换为TYPE结构类型的指针

2->
    通过((TYPE *)0)->MEMBER访问TYPE结构中的MEMMBER数据成员

3->
    通过 &((TYPE *)4)->MEMBER取出TYPE结构中的数据成员MEMBER的地址

4->
    通过((size_t) &((TYPE *)4)->MEMBER)将结果转换为size_t类型
*/
