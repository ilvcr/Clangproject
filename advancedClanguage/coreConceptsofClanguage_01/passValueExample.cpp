/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Wed 18 Apr 2018 02:55:13 PM CST
 @File Name: passValueExample.cpp
 @Description:  用来学习传值的案例
************************************************************************/

#include<stdio.h>

void swap(int p1, int p2)
{
    printf("\np1和p2交换前\n");
    printf("  p1=%d\tp2=%d\n", p1, p2);

    int temp;
    temp = p1;
    p1 = p2;
    p2 = temp;

    printf("\n p1和p2交换后\n");
    printf("  p1=%d\tp2=%d\n", p1, p2);

    return ;
}

int main(int argc, char *argv[])
{
    int a, b;

    a = 20;
    b = 30;
    printf("调用swap()函数以前\n");
    printf("  a=%d\tb=%d\n", a, b);

    swap (a, b);  //传值

    printf("\n调用swap()函数以后\n");
    printf("  a=%d\tb=%d\n", a, b);

    return 0;
}
