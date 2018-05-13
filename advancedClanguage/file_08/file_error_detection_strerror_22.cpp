/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Sat 12 May 2018 07:26:05 PM CST
 @File Name: file_error_detection_strerror_22.cpp
 @Description:  strerror函数的使用方法
************************************************************************/

/*
strerror函数
    原形: char* strerror(int errnum);
    功能: 通过参数errnum返回对应的错误信息
    返回值: errnum所对应的描述信息
*/

/*
strerror函数可以把出错的数值信息转化为易于理解的字符串信息
*/

#include<stdio.h>
#include<errno.h>
#include<string.h>

int main(int argc, char **argv)
{
    FILE* fpin, * fpout;
    fpin = fopen("fdsa.txt", "r");

    if(NULL == fpin)
    {
        printf("%s\n", strerror(errno));
        return 0;
    }
    fclose(fpin);

    return 0;
}
