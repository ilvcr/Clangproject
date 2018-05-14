/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Sun 13 May 2018 11:35:18 PM CST
 @File Name: strlen_and_sizeof_different_01.cpp
 @Description:  strlen和sizeof的区别
************************************************************************/

#include<stdio.h>
#include<string.h>

int main(int argc, char **argv)
{
    char str[8] = "fadsa";
    
    printf("字符串的长度: %d\n", strlen(str)); 
    //sizeof操作符返回的是参数所占的内存数， 

    printf("占用内存的大小为:%d字节\n", sizeof(str));
    //strlen函数返回的是参数的字符串的长度，不是所占用的内存的大小
    //strlen函数的参数是字符串，并且必须以串结束符"\0"结尾

    return 0;
}

