/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Sun 29 Apr 2018 02:16:39 PM CST
 @File Name: use_malloc_of_array_in_function.cpp
 @Description:  申请一个动态数组, 可防止数组被调用后被释放掉
************************************************************************/

#include<stdio.h>
#include<stdlib.h>

#define  N  8

int* creat()
{
    int i;
    printf("creat()函数中产生素族元素\n");
    int* arr = (int *)malloc(sizeof(int *)*N);
    printf("sizeof(int*)*N = ",(sizeof(int *)*N));
    for(i=0;i<N;i++)
    {
        arr[i]=rand() % 100;
        printf("%d\t", arr[i]);
    }

    return arr;
}

int sort(int arr[], int n)
{
    int i, j;
    int temp;
    int flag;
    for(i=0;i<n-1;i++)
    {
        flag = 1;
        for(j=0;i<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
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
    int *p;
    p = creat();
    sort(p,N);
    printf("\n通过函数调用返回进行排序后的数组\n");
    print(p,N);
    free(p);

    return 0;
}
