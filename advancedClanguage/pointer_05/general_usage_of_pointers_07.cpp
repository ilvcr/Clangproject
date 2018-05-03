/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Wed 02 May 2018 03:07:18 PM CST
 @File Name: general_usage_of_pointers_07.cpp
 @Description:  通过地址取出该地址单元中的内容
************************************************************************/

#include<stdio.h>

int main(int argc, char * argv[])
{
    int a;
    a = 9;
    printf("a = %d\n",*(&a));


    return 0;
}
