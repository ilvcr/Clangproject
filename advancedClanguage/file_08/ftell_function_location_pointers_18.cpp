/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Sat 12 May 2018 06:24:09 PM CST
 @File Name: ftell_function_location_pointers_18.cpp
 @Description:  根据fseek函数求文件的长度
************************************************************************/

#include<stdio.h>

#define  N  4

struct stu{
        char name[20];
        char nu[10];
        int score;
}st[N]={{"LXP", "1234567", 326},
        {"ZDD", "1234568", 562},
        {"PXM", "1234569", 456},
        {"WMM", "1234560", 258}
};

int main(int argc, char **argv)
{
    FILE* fpin, * fpout;
    fpin = fopen("bina.txt", "w");
    if(NULL == fpin)
    {
        printf("OPEN FAILED!!!\n");
        return 0;
    }
    fwrite(&st, sizeof(struct stu), 4, fpin);
    fclose(fpin);

    fpout = fopen("bina.txt", "r");
    if(NULL == fpout)
    {
        printf("OPEN FAILED!!!\n");
        return 0;
    }
    fseek(fpout, 0, 2);
    printf("bian.txt文件占用的内存大小为%d字节\n", ftell(fpout));

    return 0;
}

