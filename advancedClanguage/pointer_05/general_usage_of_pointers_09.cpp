/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Wed 02 May 2018 03:18:08 PM CST
 @File Name: general_usage_of_pointers_09.cpp
 @Description: 不同类型变量的指针分析
************************************************************************/

#include<stdio.h>

int main(int argc, char * argv[])
{
    int a;
    short *pa = NULL;
    char *pb;
    a = 0x12345678;
    pa = (short*)&a;
    pb = (char*)&a;

    printf("short类型占用的内存大小为: %d\n", sizeof(short));
    printf("char类型占用的内存大小为: %d\n\n\n", sizeof(char));

    printf("int型指针的pa的值为: %x\n", pa);
    printf("int型指针的pb的值为: %x\n\n\n", pb);
    
    printf("int型指针的pa所指向内存单元的值为: %x\n", *pa);
    printf("int型指针的pb所指向内存单元的值为: %x\n", *pb);

    return 0;
}
