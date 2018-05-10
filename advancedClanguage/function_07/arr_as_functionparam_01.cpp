/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Wed 09 May 2018 01:24:31 PM CST
 @File Name: arr_as_functionparam_01.cpp
 @Description:  数组作为函数参数的使用
************************************************************************/


#include<stdio.h>
int sort(int* ,int);

int sort(int arr[], int n)
{
    int i, j, k, temp;

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
            temp = arr[i];
            arr[i] = arr[k];
            arr[k] = temp;
        }
    }

    return 0;
}

int main(int argc, char ** argv)
{
    int i;
    int arr[8] = {12, 34, 11, 43, 54, 21, 33, 50};
    sort(arr, 8);

    for(i=0;i<8;i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");

    return 0;
}
