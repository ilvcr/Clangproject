/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Mon 14 May 2018 01:27:01 PM CST
 @File Name: void_and_voids_difference_08.cpp
 @Description: 示例代码 
************************************************************************/

#include<stdio.h>
#include<stdlib.h>

int sum(int a[], int n)
{
    int i, sum;
    sum = 0;
    for(i=0;i<n;i++)
    {
        sum += a[i];
    }

    return sum;
}

int main(int argc, char **argv)
{
    int a[4] = {1, 2, 3, 4};
    printf("sum = %d\n", sum(a, 4));

    return 0;
}
