/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Wed 09 May 2018 02:01:42 PM CST
 @File Name: arrdomn_as_functionparam_03.cpp
 @Description:  多维数组作为函数参数的使用情况
************************************************************************/

#include<stdio.h>

int print(int row, int a[][3])
{
    int i, j;

    for(i=0;i<row;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}


int main(int argc,char ** argv)
{
    int arr[3][3] = {99, 65, 45, 15, 89, 57, 28, 23, 45};
    print(3,arr);

    return 0;
}

