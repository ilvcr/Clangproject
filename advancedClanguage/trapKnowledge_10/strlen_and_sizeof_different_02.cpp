/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Sun 13 May 2018 11:43:50 PM CST
 @File Name: strlen_and_sizeof_different_02.cpp
 @Description:  strlen函数和sizeof在指针中的使用
************************************************************************/

#include<stdio.h>
#include<string.h>

int main(int argc, char **argv)
{
    char *str = "HELLO!!";

    printf("strlen(str) = %d\n", strlen(str));

    printf("sizeof(str) = %d\n", sizeof(str));

    printf("sizeof(*str) = %d\n", sizeof(*str));

    return 0;
}
