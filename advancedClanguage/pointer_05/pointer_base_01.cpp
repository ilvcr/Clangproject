/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Wed 02 May 2018 01:39:56 PM CST
 @File Name: pointer_base_01.cpp
 @Description:  不同类型指针之间的区别
************************************************************************/

#include<stdio.h>

int main(int argc, char *argv[])
{
    char a = 1, *pa;
    int b = 2, *pb;
    double c = 3, *pc;
    pa = &a;
    pb = &b;
    pc = &c;

    printf("char\t型指针pa占用内存的大小为: %d字节\n", sizeof(pa));
    printf("int\t型指针pa占用内存的大小为: %d字节\n", sizeof(pb));
    printf("double\t型指针pa占用内存的大小为: %d字节\n\n", sizeof(pc));

    printf("***********************************************************\n\n");

    printf("char\t型指针pa所指向的内存区域的大小为: %d字节\n", sizeof(*pa));
    printf("int\t型指针pb所指向的内存区域的大小为: %d字节\n", sizeof(*pb));
    printf("double\t型指针pc所指向的内存区域的大小为: %d字节\n\n", sizeof(*pc));
    
    printf("***********************************************************\n\n");
    
    printf("char\t型变量a的地址为: %u\n", pa);
    printf("int\t型变量a的地址为: %u\n", pb);
    printf("double\t型变量a的地址为: %u\n", pc);

    return 0;
}
