/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Sat 12 May 2018 06:39:40 PM CST
 @File Name: file_error_detection_ferror_19.cpp
 @Description:  
************************************************************************/

/*
ferror函数
    原形: int ferror(FILE* fp)
    功能: 检测对文件指针fp所指向的文件读写操作出现的错误
    返回值: 没有出错就返货0, 出错就返回非0
*/

/*
每次进行读写操作后,再调用ferror函数都会产生一个新的值,因此在调用读写的操作后
要及时调用ferror函数对其进行检测,否则信息就会丢失
*/

#include<stdio.h>

int main(int argc, char **argv)
{
    FILE* fpin, * fpout;
    fpin = fopen("bina.txt", "r");
    if(ferror(fpin))
    {
        printf("OPEN FAILED!!!\n");
        return 0;
    }
    fputc('a', fpin);

    if(ferror(fpin))
    {
        printf("WRITE FAILED!!!\n");
        fclose(fpin);
        return 0;
    }
    fclose(fpin);

    return 0;
}
