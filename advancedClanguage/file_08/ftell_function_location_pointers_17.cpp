/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Sat 12 May 2018 06:11:12 PM CST
 @File Name: ftell_function_location_pointers_17.cpp
 @Description:  通过ftell函数获取每个学生信息存储地址相对于文件收的偏移字节数
************************************************************************/

/*
ftell函数
    原形: long ftell(FILE* fp)
    功能: 获取位置指针当前位置相对于文件首的偏移字节数
    返回值: 调用成功则返回当前文件的读写位置, 失败则返回-1
*/

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

    struct stu sd[N];
    int i;
    for(i=0;i<N;i++)
    {
        printf("%d\t", ftell(fpout));
        fread(&sd[i], sizeof(sd[i]), 1, fpout);
    }
    printf("\n");

    return 0;
}
