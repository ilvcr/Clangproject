/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Thu 10 May 2018 11:20:44 PM CST
 @File Name: ebp_register_stack_11.cpp
 @Description:  验证当前函数中压栈的ebp寄存器的值是否为上一个函数压栈的ebp寄存器的地址
************************************************************************/

#include<stdio.h>

int test1()
{
    int a;
    printf("test1()函数中ebp的值为:%d\n", *(&a+1));

    return 0;
}

int test()
{
    int n;
    printf("test()函数中存放的ebp寄存器的内存单元地址为:%d\n", &n+1);
    test1();

    return 0;
}

int main(int argc, char **argv)
{
    test();

    return 0;
}
