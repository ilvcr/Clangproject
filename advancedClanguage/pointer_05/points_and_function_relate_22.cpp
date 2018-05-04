/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Fri 04 May 2018 12:37:53 PM CST
 @File Name: points_and_function_relate_22.cpp
 @Description:  指针做为参数的使用情况
************************************************************************/

#include<stdio.h>

int copy_string(char from[],char to[])
{
    while(*to++=*from++);

    return 0;
}

int main(int argc, char * argv[])
{
    char str[] = "THIS IS A STRINGS!!!!";
    printf("%s\n", str);
    char dec_str[20];

    copy_string(str, dec_str);
    printf("%s\n", dec_str);

    return 0;
}
