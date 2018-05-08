/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Mon 07 May 2018 11:47:41 PM CST
 @File Name: use_of_sizeof_09.cpp
 @Description:  sizeof操作符的用法
************************************************************************/

#include<stdio.h>

int print()
{
    printf("helloWorld!!!\n");

    return 0;
}

int main(int argc, char **argv)
{
    print();
    printf("\n");
    printf("%d\n", sizeof(print()));
    return 0;
}
