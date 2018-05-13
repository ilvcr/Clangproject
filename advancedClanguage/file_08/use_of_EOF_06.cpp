/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Sat 12 May 2018 01:28:10 AM CST
 @File Name: use_of_EOF_06.cpp
 @Description:  FEOF判断二进制文件是否结束
        判断文本文件是否结束，如果遇到文件结束符,FEOF返回值为16否则为0
************************************************************************/

#include<stdio.h>

int main(int argc, char **argv)
{
    FILE *fp;

    fp = fopen("text1.txt", "r");
    if(NULL == fp)
    {
        printf("OPEN FAILED!!\n");
        return 0;
    }

    char ch;
    printf("feof as the text file's adjust single!!\n");
    ch = getc(fp);

    while(!feof(fp))
    {
        ch = getc(fp);
        printf("%d\n",feof(fp));
    }
    fclose(fp);

    fp = fopen("text2.txt", "rb");
    if(NULL == fp)
    {
        printf("OPEN FAILED!!\n");
        return 0;
    }

    printf("feof as the text file's adjust single!!\n");
    ch = getc(fp);
    while(!feof(fp))
    {
        ch = getc(fp);
        printf("%d\n", feof(fp));
    }
    fclose(fp);
    return 0;
}
