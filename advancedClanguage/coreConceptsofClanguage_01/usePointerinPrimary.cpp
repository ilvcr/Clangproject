/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Wed 18 Apr 2018 01:28:38 PM CST
 @File Name: usePointerinPrimary.cpp
 @Description:  指针的基本使用与操作
************************************************************************/

#include<stdio.h>

int main(int argsc,char *argv[])
{
    int a = 2;
    int *pa;
    char b = 't';
    char *pb;

    pa = &a;
    pb = &b;

    printf("整形指针pa占用内存大小为: %d字节\n", sizeof(pa));
    printf("整形指针pb占用内存大小为: %d字节\n", sizeof(pb));

    printf("整型变量a的地址为:\t%d\n", &a);
    printf("整型变量b的地址为:\t%d\n", &b);

    printf("整形指针pa的值为:\t%d\n", pa);
    printf("整形指针pb的值为:\t%d\n", pb);

    printf("整形指针pa+1的值为:\t%d\n", pa+1);
    printf("整形指针pb+1的值为:\t%d\n", pb+1);

    return 0;
}
