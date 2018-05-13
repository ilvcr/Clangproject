/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Sat 12 May 2018 05:34:00 PM CST
 @File Name: read_and_write_princple_14.cpp
 @Description: fread函数的使用
************************************************************************/

#include<stdio.h>

#define   N   4

struct stu{
        char name[20];
        char nu[10];
        int score;
};

int main(int argc, char **argv)
{
    FILE* fpout;
    fpout = fopen("bina.txt", "rb");
    
    if(NULL == fpout)
    {
        printf("OPEN FAILED!!!\n");
        return 0;
    }

    struct stu ss[4];
    fread(ss, sizeof(ss[1]), N, fpout);
    
    int i;
    for(i=0;i<N;i++)
    {
        printf("%s\t%s\t%d\n", ss[i].name, ss[i].nu, ss[i].score);
    }
    fclose(fpout);

    return 0;
}
