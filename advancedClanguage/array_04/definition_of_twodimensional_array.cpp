/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Sun 29 Apr 2018 01:00:06 AM CST
 @File Name: definition_of_twodimensional_array.cpp
 @Description:  二维数组的定义
************************************************************************/

#include<stdio.h>

//#define M 8 
//#define N 6

int main(int argc, char * argv[])
{
    int i = 0;
    int j = 0;
    int arr[8][6];

    for(i;i<8;i++)
    {
            for(j;j<6;j++)
            {
                arr[i][j] = i + j + 2;
                printf("arr[%d][%d]=%d\t", i, j, arr[i][j]);
                printf("&arr[%d][%d]=%u\t", i, j, &arr[i][j]);
            }
            printf("\n");

    }

    return 0 ;
}
