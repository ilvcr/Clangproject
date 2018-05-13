/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Sat 12 May 2018 02:15:24 AM CST
 @File Name: read_and_write_princple_08.cpp
 @Description:  通过fgetc函数将read_and_write_princple_07.cpp写入文件的字符
                    读出来并保存在一个数组中,最后将其成功打印
************************************************************************/

#include<stdio.h>

int main(int argc, char **argv)
{
    FILE* fpout;
    fpout = fopen("text.txt", "r");
    if(NULL == fpout)
    {
        printf("OPEN FAILED!!\n");
        return 0;
    }

    int i = 0;
    char a[26];
    char c;
    while((c=fgetc(fpout)) != EOF)
    {
        a[i] = c;
        printf("%c",a[1]);
        i++;
    }
    fclose(fpout);

    return 0;
}


