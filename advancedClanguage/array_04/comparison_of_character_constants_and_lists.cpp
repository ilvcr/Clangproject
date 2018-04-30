/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Sun 29 Apr 2018 12:12:25 PM CST
 @File Name: comparison_of_character_constants_and_lists.cpp
 @Description:  字符常量列表和字符串常量的初始化比较
************************************************************************/

#include<stdio.h>

int main(int argc, char * argv[])
{
    int i = 0;
    char arr_s[] = {"Hello World!"};
    char arr_c[] = {'H','e','l','l','o',' ','W','o','r','l','d','!'};

    printf("采用字符串常量进行初始化的arr_s数组的长度为: %d\n",sizeof(arr_s));
    printf("采用字符常量列表进行初始化的arr_c数组的长度为: %d\n",sizeof(arr_c));

    return 0;
}
