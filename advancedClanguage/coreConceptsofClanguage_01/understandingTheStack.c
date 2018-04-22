/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Tue 17 Apr 2018 08:29:43 PM CST
 @File Name: understandingTheStack.c
 @Description:
                要求在不传递参数的情况下,
                在print()函数中打印出main()函数中arr数组中的各个元素
************************************************************************/

#include<stdio.h>

void print()
{
    //填充代码
    unsigned int _ebp;
    __asm{
        mov _ebp,ebp
    }
    int *p = (int *)(*(int *)_ebp-4-4-4-7*4);
    for(int i=0;i<7;i++)
        printf("%d\t",p[i]);
}

int main()
{
    int a = 1;
    int b = 2;
    char c = 'c';
    int arr[] = {11, 12, 13, 14, 15, 16, 17, 18};

    print();

    return 0;
}
