/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Sun 29 Apr 2018 01:47:35 PM CST
 @File Name: use_of_bubble_up_sorted_advanced.cpp
 @Description:  随机生成整数, 设计print和sort函数, 使用冒泡法进行排序
************************************************************************/

#include<stdio.h>
#include<stdlib.h>

#define  N  8

int sort(int arr[], int n)
{
    int i,j;
    int temp;
    int flag;
    
    for(i=0;i<n-1;i++)
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
    }

    return 0;
}

int print(int arr[], int n)
{
    int i;

    for(i=0;i<n;i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");

    return 0;
}

int main(int argc, char * argv[])
{
    int i;
    int arr[N];
    printf("排序前:\n");

    for(i=0;i<N;i++)
    {
        arr[i]=rand()%100;
        printf("%d\t",arr[i]);
    }

    sort(arr, N);
    printf("\n排序后:\n");
    print(arr, N);
    
    return 0;
}
