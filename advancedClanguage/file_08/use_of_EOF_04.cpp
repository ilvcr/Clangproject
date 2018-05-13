/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Sat 12 May 2018 12:10:53 AM CST
 @File Name: use_of_EOF_04.cpp
 @Description:  EOF的使用
************************************************************************/

#include<stdio.h>

int copy(FILE* fpin, FILE* fpout)
{
    char ch;
    while((ch=getc(fpin)) != EOF)
    {
        putc(ch, fpout);
    }

    return 0;
}

int main(int argc,char **argv)
{
    FILE* fpin;
    FILE* fpout;

    char b = 0x34;
    char a = 0xff;

    fpin = fopen("dat1.dat", "wb");
    fpout = fopen("dat2.dat", "wb");

    fputc(b, fpin);
    fputc(a, fpin);
    fputc(b, fpin);
    fclose(fpin);
    fpin = fopen("dat1.dat", "rb");
    copy(fpin, fpout);

    fclose(fpin);
    fclose(fpout);

    return 0;
}
