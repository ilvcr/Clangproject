/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Fri 04 May 2018 12:49:43 PM CST
 @File Name: points_and_points_relate_24.cpp
 @Description:  不同类型字符指针之间的赋值
************************************************************************/

#include<stdio.h>

int main(int argc, char * argv)
{
    char *str = "aaaaabbbbbcccccddddd";
    int *ptr;
    
    ptr = (int *)str;

    while(*ptr!='\0')
    {
        printf("%s\n", ptr);
        ptr++;
    }

    return 0;
}
