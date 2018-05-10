/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Thu 10 May 2018 08:15:56 PM CST
 @File Name: call_relations_between_functions_09.cpp
 @Description:  backtrace()函数和backtrace_symbols()函数间的调用关系
************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<execinfo.h>

#define  MAX_LEVEL  10

int call_2()
{
    int i = 0;
    void* buffer[MAX_LEVEL] = {0};

    int size = backtrace(buffer, MAX_LEVEL);
    char **string = backtrace_symbols(buffer, size);

    printf("Obtained %zd stack frame.\n", size);

    for(i=0;i<size;i++)
    {
        printf("%s\n", string[i]);
    }

    free(string);

    return 0;
}

int call_1()
{
    call_2();

    return 0;
}

int call()
{
    call_1();

    return 0;
}

int main(int argc, char **argv)
{
    call();

    return 0;
}
