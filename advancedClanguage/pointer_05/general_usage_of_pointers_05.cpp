/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Wed 02 May 2018 02:42:37 PM CST
 @File Name: general_usage_of_pointers_05.cpp
 @Description:  指针的一般性用法及注意事项
************************************************************************/

#include<stdio.h>

int main(int argc, char * argv[])
{
    int a, b;
    int *pa, *pb;

    a = 100;
    b = 200;
    pa = &a;
    pb = &b;

    printf("------------------------Before Exchange------------------------\n");

    printf("a = %d;\tb = %d\n", a, b);
    printf("*pa = %d;\t*pb = %d\n", *pa, *pb);

    *pa = 300;
    int c = 500;
    pb = &c;

    printf("------------------------After Exchange------------------------\n");
    printf("a = %d;\t*pa = %d\n", a, *pa);
    printf("*c = %d;\tb = %d;\t*pb = %d\n", c, b, *pb);

    return 0;
}
