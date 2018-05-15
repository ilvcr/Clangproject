/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Mon 14 May 2018 02:20:26 PM CST
 @File Name: select_sort_03.cpp
 @Description:  选择排序
************************************************************************/

#include<stdio.h>

#define  GET_ARR_LEN(arr, len)  {len = (sizeof(arr)) / (sizeof(arr[0]));}

int select_sort(int arr[], int n)
{
    int i, j, k, tmp;
    for(i=0;i<n-1;i++)
    {
        k = i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j] < arr[k])
            {
                k = j;
            }
        }

        if(k != i)
        {
            tmp = arr[i];
            arr[i] = arr[k];
            arr[k] = tmp;
        }
    }

    return 0;
}

int main(int argc, char** argv)
{
    int i, len;
    int a[] = {12, 5, 1000, 3, 56, 74, 28, 345, 654};
    GET_ARR_LEN(a, len);

    printf("BEFORE SORT: \n");
    for(i=0;i<len;i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");

    select_sort(a, len);
    printf("AFTER SORT: \n");
    for(i=0;i<len;i++)
    {
        printf("%d\t", a[i]);
    }

    printf("\n");

    return 0;
}
