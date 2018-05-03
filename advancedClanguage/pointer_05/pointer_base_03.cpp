/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Wed 02 May 2018 02:24:45 PM CST
 @File Name: pointer_base_03.cpp
 @Description:  不同类型指针间的转化
************************************************************************/


#include<stdio.h>

int main(int argc, char * argv[])
{
    int a;
    int *pa;
    pa = &a;
    a = 0x12345678;

    printf("int\t型指针pa的值为: %x\n", pa);
    printf("char\t型指针pa的值为: %x\n\n", (char*)pa);

    printf("int\t型指针pa所指内存单元的值为: %x\n", *pa);
    printf("char\t型指针pa所指内存单元的值为: %x\n\n", *(char*)pa);

    return 0;
}
