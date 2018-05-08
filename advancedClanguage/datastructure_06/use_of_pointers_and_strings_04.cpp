/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Mon 07 May 2018 08:51:28 PM CST
 @File Name: use_of_pointers_and_strings_04.cpp
 @Description: 对指针和数组的字符串初始化进行比较
************************************************************************/

#include<stdio.h>

int main(int argc, char *argv[])
{
    char *namep;
    namep = "李二";
    char name[10] = "王五";

    printf("%s\n", namep);
    printf("%s\n", name);

    return 0;
}
