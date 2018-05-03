/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Wed 02 May 2018 03:10:12 PM CST
 @File Name: general_usage_of_pointers_08.cpp
 @Description:  指针变量与地址之间的关系
************************************************************************/


#include<stdio.h>

int main(int argc, char * argv[])
{
    int a, *pa;
    a = 12;
    pa = &a;

    printf("指针变量pa的地址: %u\n\n", &pa);

    printf("int型变量a的地址为: %u\n", &a);
    printf("int型指针的pa的值为: %u\n\n", *(&pa));

    printf("a的值为: %d\n", a);
    printf("int型指针pa所指的内存单元的值为: %d\n\n", *pa);

    return 0;
}
