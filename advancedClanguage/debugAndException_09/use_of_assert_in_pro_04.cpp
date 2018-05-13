/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Sun 13 May 2018 01:34:57 AM CST
 @File Name: use_of_assert_in_pro_04.cpp
 @Description:  通过宏__func__获取出错位置的函数名
************************************************************************/

#include<stdio.h>
#include<stdlib.h>

//#define NDEBUG        //baned

#ifndef NDBUG           //start assert test
void assert_report(const char* file_name, const char* function_name, unsigned int line_no)
{
    printf("file_name: %s, function_name: %s, line %u\n", file_name, function_name, line_no);;
    abort();
}

#define assert(condition)\
do{\
    if(condition)\
        NULL;\
    else\
    {\
        printf("Error Report: %s ",#condition);\
        assert_report(__FILE__, __func__, __LINE__);\
    }\
}while(0)

#else

#define assert(condition) NULL

#endif

int main(int argc, char ** argv)
{
    int i;
    i = 0;
    assert(i++);
    printf("%d\n", i);

    return 0;
}

