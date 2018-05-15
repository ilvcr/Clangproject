/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Tue 15 May 2018 11:53:12 PM CST
 @File Name: sequential_search_06.cpp
 @Description:  顺序查找
************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<memory.h>

#define  GET_ARR_LENG(arr, len)  {len = (sizeof(arr)) / (sizeof(arr[0]));}

int order_search(int a[], int n, int des)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(des==a[i])
        {
            return 1;
        }
    }

    return 0;
}

int main(int argc, char **argv)
{
    int i, len;
    int a[] = {100, 23, 45, 67, 78, 15, 46, 78, 54, 69};
    GET_ARR_LENG(a, len)
    
    for(i=0;i<len;i++)
    {
        printf("%\t", a[i]);
    }

    while(getchar())
    {
        printf("\n\nPlease enter the element to search: ");
        int val;
        scanf("%d", &val);

        int ret = order_search(a, len, val);

        if(1 == ret)
            printf("\nSEARCH SUCCESSED!!!\n");
        else
            printf("\nSEARCH FAILED\n");
    }

    return 0;
}


