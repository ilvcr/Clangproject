/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Wed 02 May 2018 03:29:33 PM CST
 @File Name: general_usage_of_pointers_10.cpp
 @Description:  数组间的引用
************************************************************************/

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char * argv[])
{
    int a[4];
    int i;
    int *pa, *pb;

    for(i=0;i<4;i++)
    {
        a[i] = i + 2;
    }
    printf("数组a的首地址为: %u\n\n", a);

    pa = a;
    for(i=0;i<4;i++)
    {
        printf("a[%d] = %d\t", i, *(pa+i));
    }
    printf("\n通过*(pa+i)间接引用数组a中元素之后pa的值为: %d\n", pa);

    pb = a;
    for(i=0;pb<pa+4;)
    {
        printf("a[%d] = %d\t", i++, *pb++);
    }
    printf("\n通过*pb++间接引用数组a中元素之后pb的值为: %d\n", pb);

    return 0;
}
