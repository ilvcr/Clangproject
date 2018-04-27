/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Fri 27 Apr 2018 02:45:40 PM CST
 @File Name: do_while_continue_example.cpp
 @Description:  查找 50 以内能同时被 2、 5 整除的正整数
************************************************************************/

#include<stdio.h>

int main(int argc, char * argv[])
{
    int n = 50;

    do{
        if(0 != n%2)
            continue;
        if(0 != n%5)
            continue;
        printf(" 能同时被 2 和 5 整除的正整数 :%d\n",n);
        }while(--n);


    return 0;
}
