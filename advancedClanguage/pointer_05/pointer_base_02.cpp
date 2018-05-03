/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Wed 02 May 2018 01:56:01 PM CST
 @File Name: pointer_base_02.cpp
 @Description:  普通指针和数组指针的区别和联系
************************************************************************/

#include<stdio.h>

int main(int argc, char *argv[])
{
    char a[4];
    char (*pa)[4],*pb;

    pa = &a;
    pb = &a[0];

    printf("char型数组指针pa所占用的内存大小为: %d\n", sizeof(*pa));
    printf("char型指针pb所占用的内存大小为: %d\n\n", sizeof(*pb));

    printf("**************************************************\n\n");

    printf("pa = %u;\tpa + 1 = %u\n", pa, pa+1);
    printf("pb = %u;\tpb + 1 = %u\n", pb, pb+1);
    
    return 0;
}
