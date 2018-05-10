/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Wed 09 May 2018 01:57:21 PM CST
 @File Name: arr_as_functionparam_02.cpp
 @Description: 数组在作为函数参数时会退化为指针不再是数组
************************************************************************/

#include<stdio.h>

int print(int a[8])
{
    printf("sizeof(a)=%d\n", sizeof(a));

    return 0;
}

int main(int argc, char ** argv)
{
    int arr[8] = {99, 65, 45, 15, 47, 28, 23, 89};

    printf("sizeof(arr)=%d\n", sizeof(arr));
    print(arr);

    return 0;
}
