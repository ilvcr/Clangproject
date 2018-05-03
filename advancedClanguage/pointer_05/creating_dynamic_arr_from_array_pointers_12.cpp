/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Thu 03 May 2018 01:02:00 PM CST
 @File Name: creating_dynamic_arr_from_array_pointers_12.cpp
 @Description:  通过一个指针数组来创建一个动态的二位数组
************************************************************************/

#include<stdio.h>
#include<stdlib.h>

#define  N  3
#define  M  4
#define  SIZEOFINT sizeof(int)

int main(int argc, char * argv[])
{
    int *a[N];
    int i, j;

    for(i=0;i<3;i++)
    {
        if((a[i]=(int*)malloc(M*SIZEOFINT))==NULL)
        {
            printf("分配失败! ");
            exit(0);
        }
    }

    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            a[i][j] = i*M+j+1;
            printf("a[%d][%d] = %d\t"), i, j, a[i][j];
        }
        printf("\n");
    }

    for(i=0;i<N;i++)
    {
        free(a[i]);
    }

    return 0;
}
