/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Fri 04 May 2018 12:45:40 PM CST
 @File Name: points_and_points_relate_23.cpp
 @Description:  简单的相同类型指针之间的赋值
************************************************************************/

#include<stdio.h>

int main(int argc, char * argv[])
{
    char *str = "aaaaabbbbbcccccddddd";
    char *ptr;

    ptr = str;
    printf("%s\n", ptr);

    return 0;
}
