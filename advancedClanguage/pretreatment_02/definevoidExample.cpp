/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Mon 23 Apr 2018 05:08:18 PM CST
 @File Name: definevoidExample.cpp
 @Description:   viod()使用方法
************************************************************************/

#include<stdio.h>

int print()
{
    printf("Hello World.\n");
    
    return 0;
}

int main(int argc, char * argv[])
{
    #define print() ((void)(3))  //使函数不被调用
    print();

    return 0;
}
