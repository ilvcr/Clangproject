/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Wed 09 May 2018 02:43:40 PM CST
 @File Name: func_point_transfer_func_07.cpp
 @Description:  函数指针调用函数的方法
************************************************************************/

#include<stdio.h>

int max(int x, int y)
{
    return x>y?x:y;
}

int min(int x,int y)
{
    return x<y?x:y;
}

int main(int argc, char ** argv)
{
    int (*f)(int x, int y);
    
    f = max;
    printf("max(2,6) = %d\tf(5,4) = %d\n", max(2, 6), f(5, 4));

    f = min;
    printf("min(2,6) = %d\tf(5,4) = %d\n", min(2, 6), f(5, 4));
    return 0;
}
