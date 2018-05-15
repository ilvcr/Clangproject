/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Mon 14 May 2018 02:46:40 PM CST
 @File Name: quick_sort_04.cpp
 @Description:  快速排序(冒泡排序的改进)
************************************************************************/

#include<stdio.h>

#define  GET_ARR_LEN(arr, len) {len = (sizeof(arr)) / (sizeof(arr[0]));}

int partition(int arr[], int low, int high)  //分割
{
    int key;
    key = arr[low];
    
    while(low < high)
    {
        while(low < high && arr[high] >=key)
            high--;
        if(low < high)
            arr[low++] = arr[high];
        
        while(low < high && arr[low] <= key)
            low++;
        if(low < high)
            arr[high--] = arr[low];
    }

    arr[low] = key;

    return low;
}

int quick_sort(int arr[], int start, int end)
{
    int pos;
    if(start < end)
    {
        pos = partition(arr, start, end);
        quick_sort(arr, start, pos-1);
        quick_sort(arr, pos+1, end);
    }
    
    return 0;
}

int main(int argc, char **argv)
{
    int i, len;
    int arr[] = {1000, 23, 6, 345, 765, 34, 76, 156, 45};
    GET_ARR_LEN(arr, len);

    printf("BEFORE SORT: \n");
    for(i=0;i<len;i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");

    quick_sort(arr, 0, len-1);
    printf("\nAFTER SORT: \n");
    for(i=0;i<len;i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");

    return 0;
}


