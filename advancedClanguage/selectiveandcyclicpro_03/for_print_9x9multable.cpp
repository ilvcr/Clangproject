/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Fri 27 Apr 2018 02:04:39 PM CST
 @File Name: for_print_9x9multable.cpp
 @Description:  for 循环嵌套以三角的方式打印出九九乘法表
************************************************************************/

#include<stdio.h>

int main(int argc, char * argv[])
{
    int i, j;

    for(i=1;i<10;i++)
    {
        for(j=1;j<=i;j++)
            printf("%dX%d=%d\t",j ,i, i*j );
        printf("\n");
    }

    return 0;
}
