/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Sat 12 May 2018 04:22:10 PM CST
 @File Name: read_and_write_princple_10.cpp
 @Description:  通过fgets函数从read_and_write_princple_10.cpp中获取写入的字符串
************************************************************************/


#include<stdio.h>

int main(int argc, char **argv)
{
    FILE* fpout;
    char string[4];
    fpout = fopen("text.txt", "r");

    if(NULL == fpout)
    {
        printf("OPEN FAILED!!!\n");
        return 0;
    }

    while(!feof(fpout))
    {
        fgets(string, 4, fpout);
        printf("%s", string);
    }
    fclose(fpout);

    return 0;
}
