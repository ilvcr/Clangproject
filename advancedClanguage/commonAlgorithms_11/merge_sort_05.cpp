/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Tue 15 May 2018 09:44:56 PM CST
 @File Name: merge_sort_05.cpp
 @Description:归并排序
************************************************************************/
#include<stdio.h>
#include<stdlib.h>
 
#define  N  7
 
#define  GET_ARR_LENG(arr, len)  {len = (sizeof(arr) / (sizeof(arr[0])));}

int merge(int arr[], int low, int mid, int high)
{
    int i, k;
    int *tmp = (int *)malloc((high-low+1)*sizeof(int));
    //申请空间，使其大小为两个
    int left_low = low;
    int left_high = mid;
    int right_low = mid + 1;
    int right_high = high;

    for(k=0;left_low<=left_high && right_low<=right_high;k++) //比较两个指针所指向的元素
    {
        if(arr[left_low]<=arr[right_low])
        {
            tmp[k] = arr[left_low++];
        }
        else
        {
            tmp[k] = arr[right_low++];
        }
    }

    if(left_low<=left_high)     //若第一个序列有剩余,直接复制出来粘到合并序列尾
    {
        //memcpy(tmp+k, arr+left_low, (left_high-left_low+1)*sizeof(int));
        for(i=left_low;i<=left_high;i++)
            tmp[k++] = arr[i];
    }

    if(right_low<=right_high)   //若第二个序列有剩余,直接复制出来粘到合并序列尾        
    {
        //memcpy(tmp+k, arr+left_low, (right_high-right_low+1)*sizeof(int));
        for(i=right_low;i<=right_high;i++)
            tmp[k++] = arr[i];
    }

    for(i=0;i<high-low+1;i++)
        arr[low+i] = tmp[i];


    free(tmp);

    return 0;
}


int merge_sort(int arr[],unsigned int first, unsigned int last)
{
    int mid = 0;
    if(first<last)
    {
        mid = (first + last) / 2;   //防止溢出
        //mid = (first & last) + ((first ^ last) >> 1);
        merge_sort(arr, first, mid);
        merge_sort(arr, mid+1, last);
        merge(arr, first, mid, last);
    }

    return 0;
}

int main(int argc, char **argv)
{
    int i, len;
    int a[] = {100, 23, 345, 65, 234, 68, 37, 32, 78, 46};
    GET_ARR_LENG(a, len)
    printf("\nBEFORE SORT:\n");
    for(i=0;i<len;i++)
    {
        printf("%d\t", a[i]);
    }

    merge_sort(a, 0, len-1);

    printf("\n\nAFTER SORT:\n");
    for(i=0;i<len;i++)
    {
        printf("%d\t", a[i]);
    }

    printf("\n");

    return 0;
}


