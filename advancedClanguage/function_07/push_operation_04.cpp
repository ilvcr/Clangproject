/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Wed 09 May 2018 02:07:48 PM CST
 @File Name: push_operation_04.cpp
 @Description:  压栈操作
************************************************************************/

#include<stdio.h>

static int print(int n, ...)
{
    static int *p, i;
    p = &n+1;
    for(i=0;i<n;i++)
    {
        printf("%d\t",p[i]);
    }
    printf("\n");

    return 0;
}

int main(int argc, char ** argv)
{
    print(4, 13, 34, 56, 78);

    return 0;
}
