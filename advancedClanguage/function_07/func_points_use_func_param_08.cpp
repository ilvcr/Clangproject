/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Wed 09 May 2018 02:51:23 PM CST
 @File Name: func_points_use_func_param_08.cpp
 @Description:  函数指针作为函数参数的使用
************************************************************************/

#include<stdio.h>

typedef int (*print)(int);

int fun1(int i)
{
    return (int)i;
}

int fun2(int n, print prt)
{
    for(int k=0;k<n;k++)
    {
        printf("%d\t", prt(k));
        if(0 == (k+1)%3)
            printf("\n");
    }

    return 0;
}

int main(int argc, char * argv[])
{
    int n = 9;
    fun2(n, fun1);

    return 0;
}
