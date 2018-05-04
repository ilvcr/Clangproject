/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Fri 04 May 2018 12:05:14 AM CST
 @File Name: arr_pointer_reference_to_arr_16.cpp
 @Description:  数组中两个下标的含义的区别
************************************************************************/

#include<stdio.h>

#define  N  2
#define  M  3

int main(int argc, char * argv[])
{
    int a[N][M];
    int i, j;

    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            a[i][j] = i+j;
        }
    }

    printf("直接求取数组元素的地址\n");

    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            printf("&a[%d][%d] = %x\t", i, j, &a[i][j]);
        }
        printf("\n");
    }

    printf("\n间接求取数组元素的地址\n");

    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            printf("&a[%d][%d] = %x\t", i, j, a[i]+j);
        }   
        printf("\n");
    }

    return 0;
}
