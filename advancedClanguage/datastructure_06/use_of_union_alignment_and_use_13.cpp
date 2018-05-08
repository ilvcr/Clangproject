/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Tue 08 May 2018 11:15:37 AM CST
 @File Name: use_of_union_alignment_and_use_13.cpp
 @Description:  共用体变量的初始化和引用
************************************************************************/

#include<stdio.h>

union st{
    double a;
    int    b;
    char   c;
};

int main(int argc, char **argv)
{
    union st d;
    d.a = 1.23;
    printf("d.a = %.2lf\n", d.a);
    d.b = 98;
    printf("d.b = %.d\n", d.b);
    d.c = 'a';
    printf("d.c = %c\n", d.c);

    return 0;
}
