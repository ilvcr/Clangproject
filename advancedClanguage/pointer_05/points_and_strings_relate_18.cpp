/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Fri 04 May 2018 11:34:11 AM CST
 @File Name: points_and_strings_relate_18.cpp
 @Description:  使用printf()函数时字符串后面必须有结束字符'\0'
************************************************************************/

#include<stdio.h>

int main(int argc, char * argv[])
{
    char *str = "HelloWorld!!!!";

    while(*str!='\0')
        printf("%c", *str++);


    printf("\n");
    return 0;
}
