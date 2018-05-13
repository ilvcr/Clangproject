/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Sat 12 May 2018 06:58:26 PM CST
 @File Name: file_error_detection_perror_21.cpp
 @Description:  perror函数的使用
************************************************************************/

/*
perror函数
    原形: void perror(const char* s);
    功能: 将上一个函数发生的错误的原因输出到标准设备(stderr)。参数s所致的字符串现被打印,
            后面再加上错误原因字符串.此错误原因一招全局变量error的值来决定要输出的字符串

    返回值: 无返回值
*/

#include<stdio.h>

int main(int argc, char **argv)
{
    FILE* fpin, * fpout;
    fpin = fopen("fdsa.txt", "r");
    if(NULL == fpin)
    {
        perror("E:\\fdsa\\f.txt");
        return 0;
    }
    fclose(fpin);

    return 0;
}
