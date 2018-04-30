/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Sun 29 Apr 2018 01:36:43 PM CST
 @File Name: use_of_bubble_up_sorted.cpp
 @Description:  随机产生8个0--99之间的随机整数然后进行冒泡法升级排序
************************************************************************/

#include<stdio.h>
#include<stdlib.h>

#define  N  8

int sort(int arr[], int n)
{
    int i, j;
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

    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }

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

    printf("\n排序后\n");
    sort(arr,N);
    printf("\n");

    return 0;
}
