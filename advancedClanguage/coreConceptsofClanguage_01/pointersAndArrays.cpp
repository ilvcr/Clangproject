/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Wed 18 Apr 2018 01:39:23 PM CST
 @File Name: pointersAndArrays.cpp
 @Description:  指针数组和数组指针访问二维数组的方式
************************************************************************/

#include<stdio.h>

int main(int argc, char *argv[])
{
    int arr[4][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int (*p1)[4];
    int *p2[4];
    int i, j, k;
    
    p1 = arr;

    printf("使用数组指针的方式访问二维数组 arr\n");

    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("arr[%d][%d]=%d\t", i, j, *(*(p1+i)+j));
        }
        printf("\n");
    }

    printf("\n 使用指针数组的方式访问二维数组 arr\n");

    for(k=0;k<4;k++)
        p2[k] = arr[k];
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("arr[%d][%d]=%d\t", i, j, *(p2[i]+j));
        }
        printf("\n");
    }

    //return ;
}
