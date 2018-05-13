/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Sun 13 May 2018 01:08:57 AM CST
 @File Name: use_of_NDEBUG_in_assert_02.cpp
 @Description:  #define NDEBUG的用法
************************************************************************/

#include<stdio.h>

//#define NDEBUG

#include<assert.h>

int copy_string(char from[], char to[])
{
    int i = 0;
    while(to[i++]=from[i]);  把数组from里的内容复制到数组to中

    return 1;
}

int main(int argc, char **argv)
{
    int ret;
    char str[] = "this is a string";
    char dec_str[50];

    printf("main函数中的str字符串为: %s\n", str);

    ret = copy_string(str, dec_str);

    assert(ret);

    printf("复制成功后的dec_str字符串为: %s\n", dec_str);

    return 0;
}
