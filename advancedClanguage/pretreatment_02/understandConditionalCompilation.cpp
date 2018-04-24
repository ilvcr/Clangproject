/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Tue 24 Apr 2018 05:16:09 PM CST
 @File Name: understandConditionalCompilation.cpp
 @Description:  了解条件编译命令的使用
************************************************************************/

#include<stdio.h>

#define NUM 0
#define ON_OFF 0

int main(int argc, char * argv[])
{
    #if NUM>0
        printf("NUM 的值大于 0\n");
    #elif NUM<0
        printf("NUM 的值小于 0\n");
    #else
        printf("NUM 的值等于 0\n");
    #endif

    #if ON_OFF
        printf("使用条件编译命令注释掉的语句部分 \n");
    #endif

    return 0;
}
