/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Fri 11 May 2018 11:03:58 PM CST
 @File Name: use_of_EOF_03.cpp
 @Description:  EOF的具体使用
************************************************************************/

#include<stdio.h>

int copy(FILE* fpin, FILE* fpout)
{
    char ch;
    ch = getc(fpin);
    while(!feof(fpin))
    {
        putc(ch, fpout);
        ch = getc(fpin);
    }
    return 0;
}

int main(int argc, char **argv)
{
    FILE* fpin;
    FILE* fpout;
    fpin = fopen("text1.txt", "r");
    fpout = fopen("text2.txt", "w");

    int c;
    while((c = getchar()) != EOF)
    {
        putchar(c);
        c = getchar();
    }

    copy(fpin, fpout);
    
    fclose(fpin);
    fclose(fpout);

    return 0;
}
