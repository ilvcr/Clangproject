/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Tue 24 Apr 2018 05:43:21 PM CST
 @File Name: shapragmapack.cpp
 @Description:  #pragma pack()应用
************************************************************************/

#include<stdio.h>

int main(int argc, char * argv[])
{
    #pragma pack(2)

    struct _stu1{
            char name[20];
            char num[10];
            int score;
            char sex;
    }stu1;

    printf("str1 占用内存的大小为 :%d 个字节 \n",sizeof(stu1));

    #pragma pack()

    struct _stu2{
            char name[20];
            char num[10];
            int score;
            char sex;
    }stu2;

    printf("str2 占用内存的大小为 :%d 个字节 \n",sizeof(stu2));

    return 0;
}
