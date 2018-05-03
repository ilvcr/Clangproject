/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Thu 03 May 2018 01:16:43 PM CST
 @File Name: creating_dynamic_arr_with_arr_pointers_13.cpp
 @Description:  通过数组指针创建动态数组
************************************************************************/


#include<stdio.h>
#include<stdlib.h>

#define  N  3
#define  M  4

int main(int argc, char * argv[])
{
    int (*a)[N];
    int i, j;

    if((a=(int(*)[N])malloc(N*M*sizeof(int)))==NULL)
    {
        printf("分配失败! ");
        exit(0);
    }

    printf("当以4X3二维数组方式引用创建的动态数组时\n");
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            a[i][j]=i*N+j+1;
            printf("a[%d][%d] = %d\t", i, j, a[i][j]);
        }
        printf("\n");
    }

    printf("当以3X4二维数组方式引用创建的动态数组时\n");
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            a[i][j]=i*M+j+1;
            printf("a[%d][%d] = %d\t", i, j, a[i][j]);
        }
        printf("\n");
    }

    free(a);

    return 0;
}
