/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Thu 10 May 2018 11:14:25 PM CST
 @File Name: deep_stack_struct_10.cpp
 @Description:  加深站结构的印象
************************************************************************/

#include<stdio.h>

int test(int a, int b, int c)
{
    int arr[3] = {1, 2, 3};
    printf("函数参数地址: &a=%d\t&b=%d\t&c=%d\n", &a, &b, &c);
    printf("临时变量地址: &arr[2]=%d\t&arr[1]=%d\t&arr[0]=%d\n",&arr[2], &arr[1], &arr[0]);

    return 0;
}

int main(int argc, char **argv)
{
    test(1, 2, 3);

    return 0;
}
