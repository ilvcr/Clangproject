/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Thu 10 May 2018 11:28:48 PM CST
 @File Name: param_call_style_12.cpp
 @Description:  函数作为函数的实参来调用
************************************************************************/

#include<stdio.h>

#define  N  10
char* str()
{
    char* string = "Hello World!";

    return string;
}

int sum(int n)
{
    int i;
    int total;
    total = 0;
    for(i=1;i<=n;i++)
        total += i;


    return total;
}

int main(int argc, char **argv)
{
    printf("函数的返回值的字符串\n");
    printf("%s\n", str());

    printf("函数的返回值为整数\n");
    printf("%d\n", sum(N));

    return 0;
}
