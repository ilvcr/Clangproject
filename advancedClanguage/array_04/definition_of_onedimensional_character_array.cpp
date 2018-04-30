/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Sun 29 Apr 2018 01:31:50 AM CST
 @File Name: definition_of_onedimensional_character_array.cpp
 @Description:  一维字符数组的定义
************************************************************************/


#include<stdio.h>

#define  M   20

int main(int argc, char * argv[])
{
    int i = 0;

    long arr_l[M] = {'H','e','l','l','o',' ','W','o','r','l','d','!'};
    char arr_c[M] = {'H','e','l','l','o',' ','W','o','r','l','d','!'};

    printf("long 型字符数组占用的内存的大小为: %d\n", sizeof(arr_l));
    printf("char 型字符数组占用的内存的大小为: %d\n", sizeof(arr_c));

    return 0;
}
