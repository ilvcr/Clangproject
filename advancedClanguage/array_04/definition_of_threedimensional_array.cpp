/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Sun 29 Apr 2018 01:24:54 AM CST
 @File Name: definition_of_threedimensional_array.cpp
 @Description:  三维数组的定义及引用
************************************************************************/

#include<stdio.h>

#define  M  2
#define  N  3
#define  K  4


int main(int argc, char * argv[])
{
    int i = 0;
    int j = 0;
    int k = 0;
    int arr[M][N][K] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int a[M*N*K];

    for(i;i<M;i++)
    {
        for(j;j<N;j++)
        {
            for(k;k<K;k++)
            {
                printf("arr[%d][%d][%d]=%d\t", i, j, k, arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
