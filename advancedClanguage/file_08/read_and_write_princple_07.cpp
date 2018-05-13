/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Sat 12 May 2018 02:05:22 AM CST
 @File Name: read_and_write_princple_07.cpp
 @Description:  读写函数的选用原则
************************************************************************/

/*
1)--->>>

1->
    fputc函数
        原形: int fputc(int ch, FILE* fp)
        功能: 送一个字符到指定的文件中
        返回值: 写入成功则返回写入的字符, 失败则返回EOF

2->
    fgetc函数
        原形: int fgetc(FILE* fp)
        功能: 从文件指针fp指向的文件中读取一个字符
        返回值: 返回读取的一个字节, 如果读到文件末尾九返回EOF
*/

#include<stdio.h>

int main(int argc, char **argv)
{
    FILE* fpin;
    fpin = fopen("text.txt", "w");
    if(NULL == fpin)
    {
        printf("OPEN FAILED!!\n");
        return 0;
    }

    int i;
    char a = 0x41;
    char b;
    for(i=0;i<26;i++)
    {
        b = a+i;
        fputc(b, fpin);
    }
    fclose(fpin);
    return 0;
}
