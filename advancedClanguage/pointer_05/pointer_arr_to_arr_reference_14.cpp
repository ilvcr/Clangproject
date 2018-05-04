/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Thu 03 May 2018 11:25:49 PM CST
 @File Name: pointer_arr_to_arr_reference_14.cpp
 @Description:  指针数组引用数组
************************************************************************/


#include<stdio.h>
#include<stdlib.h>

#define  N  3
#define  M  4

int main(int argc, char * argv[])
{
    int  *a[M], b[M][N];
    int  i, j;

    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            b[i][j] = i+j;
        }
    }

    for(i=0;i<M;i++)
    {
        a[i] = b[i];
    }

    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("a[%d][%d] = %d\t",i ,j, a[i][j]);
        }

        printf("\n");
    }

    return 0 ;
}
