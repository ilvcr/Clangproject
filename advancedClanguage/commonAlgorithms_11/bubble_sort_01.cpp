/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Mon 14 May 2018 01:36:25 PM CST
 @File Name: bubble_sort_01.cpp
 @Description:  冒泡法排序基础版
************************************************************************/

#include<stdio.h>

int bubble_sort(int arr[], int n)
{
    int i, j, temp;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(arr[j] > arr[i])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    return 0;
}

int main(int argc, char **argv)
{
    int a[] = {91, 23, 54, 94, 11, 7, 45, 35};
    int i;
    int leng = sizeof(a) / sizeof(a[0]);
    printf("排序前:\n");
    for(i=0;i<leng;i++)
    {
        printf("%d\t", a[i]);
    }

    bubble_sort(a, leng);

    printf("\n排序后:\n");
    for(i=0;i<leng;i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");

    return 0;
}
