/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Sun 29 Apr 2018 12:29:23 AM CST
 @File Name: reference_to_an_array_element.cpp
 @Description:  简单数组元素的引用
************************************************************************/

#include<stdio.h>

#define N 9

int main(int argc, char * argv[])
{
    int arr[N];
    int i = 0;

    for(i;i<N;i++)
    {
        arr[i] = i + 1;
        printf("arr[%d]=%d\t", i, arr[i]);
        if(0 == (i+1)%3)
            printf("\n");
    }
    return 0;
}
