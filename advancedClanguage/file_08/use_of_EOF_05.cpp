/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Sat 12 May 2018 12:52:18 AM CST
 @File Name: use_of_EOF_05.cpp
 @Description:
************************************************************************/

#include<stdio.h>

int main(int argc, char **argv)
{
    FILE *fpin;
    FILE *fpout;

    char b = 0x34;
    fpin = fopen("dat1.dat", "wb");

    fputc(b, fpin);
    fclose(fpin);

    fpin = fopen("dat1.dat", "rb");

    char c;
    while(!feof(fpin))
    {
        printf("%X\n", c);
        c = getc(fpin);
        //printf("%X\n", c);
    }

    fclose(fpin);

    return 0;
}
