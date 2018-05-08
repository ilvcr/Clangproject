/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Tue 08 May 2018 11:06:26 AM CST
 @File Name: use_of_union_type_alignment_12.cpp
 @Description:  共用体变量的初始化方法及成员的引用
************************************************************************/

#include<stdio.h>

struct fe{
    double a;
    char b;
};

union st{
    struct fe f;
    double    a;
    int       b;
    char      c;
};

int main(int argc, char **argv)
{
    union st d;
    printf("sizeof(d):%d\n", sizeof(d));

    return 0;
}
