/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Tue 08 May 2018 12:07:43 AM CST
 @File Name: use_of_struct_type_alignment_11.cpp
 @Description: 借助宏offsetof来查看结构体中各个成员的偏移地址和结构体所占内存的大小,
                    然后理解结构体是如何让实现字节对齐操作
************************************************************************/

#include<stdio.h>

#define  offsetof(TYPE, MEMBER)  ((size_t) &((TYPE *)0)->MEMBER)


typedef struct stu1
{
    int a;
    char b;
    int c;
}stu1;

int main(int argc, char ** argv)
{
    printf("offsetof(stu1, a):\t%d\n", offsetof(stu1, a));
    printf("offsetof(stu1, b):\t%d\n", offsetof(stu1, b));
    printf("offsetof(stu1, c):\t%d\n", offsetof(stu1, c));
    printf("sizeof(stu1)     :\t%d\n", sizeof(stu1));
    
    return 0;
}
