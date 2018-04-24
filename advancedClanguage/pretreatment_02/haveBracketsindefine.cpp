/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Tue 24 Apr 2018 04:58:01 PM CST
 @File Name: haveBracketsindefine.cpp
 @Description:  求两个数之差的绝对值时用宏定义的实现方法
************************************************************************/

#include<stdio.h>

#define SUB_ABS(x, y) (((x)>(y))?((x)-(y)):((y)-(x)))

int main(int argc, char * argv[])
{
    int x = -6;
    int y = -9;
    int abs = SUB_ABS(x, y);
    
    printf("x 和 y 之差的绝对值为: %d\n", abs);

    return 0;
}
