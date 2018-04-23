/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Mon 23 Apr 2018 05:13:43 PM CST
 @File Name: definevoidadvanceExample.cpp
 @Description:  typeof(y) _y = (y)和typeof(x)==typeof(y)的区别
************************************************************************/


#include<stdio.h>

#define min(x, y) ({typeof(x) _x = (x); typeof(y) _y = (y); (void)(&_x == &_y); _x < _y ? _x : _y;})
#define min_replace(x, y) ({x < y ? x : y;})

int main(int argc, char * argv[])
{
    int x = 1;
    int y = 2;

    int result = min(x++, y);
    printf("没有替换的运行结果为: %d\n", result);

    int x1 = 1;
    int y1 = 2;
    int result1 = min_replace(x1++, y1);
    printf("替换之后的运行结果为: %d\n", result1);

    return 0;
}

