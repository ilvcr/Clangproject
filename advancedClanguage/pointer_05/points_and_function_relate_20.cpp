/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Fri 04 May 2018 12:26:25 PM CST
 @File Name: points_and_function_relate_20.cpp
 @Description:  通过main()函数来看看指针座位参数的使用
************************************************************************/


#include<stdio.h>

int main(int argc, char * argv[])
{
    while(argc>0)
    {
        printf("%s\t", *argv++);
        argc--;
    }
    
    printf("\n");

    return 0;
}

/*
argc->表示命令行输入参数的个数

argv->表示一个指针数组，用来存放命令行输出的字符串
*/
