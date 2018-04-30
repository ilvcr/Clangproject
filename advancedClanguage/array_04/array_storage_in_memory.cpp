/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Sun 29 Apr 2018 12:41:19 AM CST
 @File Name: array_storage_in_memory.cpp
 @Description:  一位叔祖在内存中的存放方式
************************************************************************/


#include<stdio.h>

#define N 4

int main(int argc, char * argv[])
{
    int arr[N];
    int i = 0;

    for(i;i<N;i++)
    {
        arr[i] = i;
        printf("&arr[%d]=%u\n",i,&arr[i]);
    }
    return 0;
}
