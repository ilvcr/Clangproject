/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Tue 24 Apr 2018 04:34:49 PM CST
 @File Name: noParameterindefine.cpp
 @Description:  不带参数的宏定义中容易被忽略的地方
************************************************************************/

#include<stdio.h>

#define INT_P int *

int main(int argc, char * argv[])
{
    int i, j;
    int a[9];
    INT_P p;

    for(i=0;i<9;i++)
    {
        a[i] = i+1;
    }

    for(j=0;p<a+9;p++)
    {
        printf("a[%d]=%d\t", j++, *p);
        if(0 == j%3)
            printf("\n");
    }

    return 0;
}
