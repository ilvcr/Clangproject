/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Wed 16 May 2018 12:05:56 AM CST
 @File Name: binary_search_07.cpp
 @Description:  二分查找
************************************************************************/

#include<stdio.h>

#define  GET_ARR_LENG(arr, len)  {len = (sizeof(arr)) / (sizeof(arr[0]));}

int binary_search(int a[], int n, int key)
{
    int low = 0;
    int high = n - 1;

    while(low <= high)
    {
        int mid = (low + high) / 2;
        int midval = a[mid];

        if(midval < key)
            low = mid + 1;

        else if(midval > key)
            high = mid - 1;

        else
            return mid;
    }

    return -1;
}

int main(int argc, char **argv)
{
    int i, val, ret, len;
    int a[] = {-32, 23, 34, 45, 56, 67, 87, 20, 54, 675, -2, 4};
    GET_ARR_LENG(a, len);

    for(i=0;i<len;i++)
        printf("%d\t", a[i]);

    printf("\nPlease enter the element for search:");
    scanf("%d", val);

    ret = binary_search(a, len, val);

    if(-1 == ret)
        printf("SEARCH SUCCESSED!!!\n");
    else
        printf("SEARCH FAILED\n");

    return 0;
}
