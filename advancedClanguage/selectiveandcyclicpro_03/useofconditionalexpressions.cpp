/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Wed 25 Apr 2018 11:57:59 PM CST
 @File Name: useofconditionalexpressions.cpp
 @Description:  了解条件表达式的使用
************************************************************************/


#include<stdio.h>

int main(int argc, char * argv[])
{
    int a, b;
    int max1, max2;
    a = 2;
    b = 8;

    if(a>b)
        max1 = a;
    else
        max1 = b;

    max2 = a>b?a:b;

    printf(" 使用 if 语句求出的 a、 b 中的最大值为 :%d\n",max1);
    printf(" 使用条件表达式求出的 a、 b 中的最大值为 :%d\n",max2);


    return 0;
}
