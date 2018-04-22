/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Wed 18 Apr 2018 03:03:33 PM CST
 @File Name: deliverAdressExample.cpp
 @Description:  传址示例
************************************************************************/

#include<stdio.h>

void swap(int *p1, int *p2)
{
    printf("\n*p1 和 *p2 交换前 \n");
    printf(" *p1=%d\t*p2=%d\n",*p1,*p2);

    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    
    printf("\n*p1 和 *p2 交换后 \n");
    printf(" *p1=%d\t*p2=%d\n",*p1,*p2);

    return ;
}

int main(int argc, char *argv[])
{
    int a, b;

    a = 20;
    b = 30;
    printf(" 调用 swap() 函数以前 \n");
    printf(" a=%d\tb=%d\n",a,b);

    swap(&a, &b);  //传址

    printf(" 调用 swap() 函数以后 \n");
    printf(" a=%d\tb=%d\n",a,b);

    return 0;
}
