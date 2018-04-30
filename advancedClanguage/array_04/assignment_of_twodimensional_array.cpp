/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Sun 29 Apr 2018 01:15:41 AM CST
 @File Name: assignment_of_twodimensional_array.cpp
 @Description:  二维数组的赋值操作
************************************************************************/

#include<stdio.h>

#define  M  4
#define  N  3

int main(int argc, char * argv[])
{
    int i = 0;
    int j = 0;
    int arr[M][N] = {
                    {1, 2, 3},
                    {4, 5, 6},
                    {7, 8, 9},
                    {10, 11, 12}};

    for(i;i<M;i++)
    {
        for(j;j<N;j++)
        {
            printf("arr[%d][%d]=%d\t", i, j, arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
