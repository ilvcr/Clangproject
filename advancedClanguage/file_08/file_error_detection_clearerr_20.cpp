/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Sat 12 May 2018 06:48:58 PM CST
 @File Name: file_error_detection_clearerr_20.cpp
 @Description:
************************************************************************/

/*
clearerr函数
    原形: void clearerr(FILE* fp);
    功能: 复位错误标志
    返回值: 无返回值
*/

/*
如果调用ferror函数进行检测并发现错误,ferror函数就返回一个非0值,那么
这个值不会被重新置为0,但可以人为地将错位U标志清除掉,使其变为0,
此时需要通过clearerr函数来实现
*/

#include<stdio.h>

int main(int argc, char **argv)
{
    FILE* fpin, *fpout;
    fpin = fopen("bina.txt", "r");
    if(ferror(fpin))
    {
        printf("OPEN FAILED!!!\n");
        return 0;
    }

    fputc('a', fpin);
    clearerr(fpin);

    if(ferror(fpin))
    {
        printf("WRITE FAILED!!!\n");
        fclose(fpin);
        return 0;
    }
    printf("CLEAR SUCCESSED!!!\n");
    fclose(fpin);

    return 0;
}
