/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Tue 24 Apr 2018 04:51:08 PM CST
 @File Name: haveParameterindefine.cpp
 @Description:  求两数之和时使用带参数的宏的方法
************************************************************************/

#include<stdio.h>

#define SUM(x,y) x+y

int main(int argc, char * argv[])
{
    int x = 6;
    int y = 9;
    int s = SUM(x, y);
    int d = SUM(x, y)*10;

    printf("第一次   x+y的值为: %d\n", s);
    printf("****************************************\n");
    printf("第二次   x+y的值为: %d\n", d);

    return 0;
}
