/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Thu 03 May 2018 11:56:58 PM CST
 @File Name: arr_pointer_reference_to_arr_15.cpp
 @Description:  数组指针对数组的引用
************************************************************************/

#include<stdio.h>
#include<stdlib.h>

#define  N  3
#define  M  4

int main(int argc, char * argv[])
{
    int  (*a)[N], b[M][N];
    int  i, j;

    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            b[i][j] = i+j;
        }
    }

    a = b;

    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("a[%d][%d] = %d\t", i, j, a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
