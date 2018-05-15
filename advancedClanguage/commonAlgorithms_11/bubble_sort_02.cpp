/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Mon 14 May 2018 01:51:09 PM CST
 @File Name: bubble_sort_02.cpp
 @Description:  冒泡排序改进版
************************************************************************/

#include<stdio.h>

#define GET_ARR_LEN(arr, len) {len = (sizeof(arr)) / (sizeof(arr[0]));}

int bubble_sort(int arr[], int n)
{
    int i, j, flag, temp;
    for(i=0;i<n;i++)
    {
        flag = 1;
        for(j=0;j<n-1-i;j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = 0;
            }
        }

            if(1 == flag)
            {
                break;
            }
    }
    printf("\n\n***********************************************");
    printf("\n比较操作进行了%d轮", i+1);
    printf("\n***********************************************\n\n");
    
    return 0;
}

int main(int argc, char **argv)
{
    int a[] = {100, 233, 34, 1000, 65, 3, 77, 85, 23};
    int i, len;
    GET_ARR_LEN(a, len);

    printf("BEFORE SORT:\n");
    for(i=0;i<len;i++)
    {
        printf("%d\t", a[i]);
    }

    bubble_sort(a, len);

    printf("\nAFTER SORT\n");
    for(i=0;i<len;i++)
    {
        printf("%d\t", a[i]);
    }

    printf("\n");

    return 0;
}
