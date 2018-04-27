/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Fri 27 Apr 2018 02:42:06 PM CST
 @File Name: do_while_break_example.cpp
 @Description:  查找 100 以内能同时被 2、 5、 9 整除的最大正整数。
************************************************************************/


#include<stdio.h>

int main(int argc, char * argv[])
{
    int n = 100;

    do{
        if(0 == n%2 && 0 == n%5 && 0 == n%9)
            break;
    }while(n--);
    printf("100 以内能同时被 2、 5、 9 整数的最大正整数为 :%d\n",n);


    return 0;
}
