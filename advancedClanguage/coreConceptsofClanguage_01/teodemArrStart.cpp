/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Wed 18 Apr 2018 01:59:28 PM CST
 @File Name: teodemArrStart.cpp
 @Description:  二维数组的起始地址的表示方式
************************************************************************/

#include<stdio.h>

int main(int argc, char *argv[])
{
    int arr[4][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int i;

    for(i=0;i<10;i++)
    {
        printf("使用arr+i求得二维数组arr第%d行的起始地址为: %d\n", i+1, arr+i);
        printf("使用arr[i]求得二维数组arr第%d行的起始地址为: %d\n", i+1, arr[i]);
        printf("使用*(arr+i)求得二维数组arr第%d行的起始地址为: %d\n", i+1, *(arr+i));
        printf("使用&arr[i]求得二维数组arr第%d行的起始地址为: %d\n", i+1, &arr[i]);
        printf("\n");
    }

    return 0;
}
