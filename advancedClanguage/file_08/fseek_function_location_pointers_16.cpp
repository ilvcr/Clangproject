/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Sat 12 May 2018 05:51:37 PM CST
 @File Name: fseek_function_location_pointers_16.cpp
 @Description:  先通过fwrite函数将信息写入指定的文件中,
                    然后通过fseek函数来进行位置指针的定位,
                    逐一取出其中的数据信息存放到制定的数组中
************************************************************************/

/*
fseek函数
    原形: int fseek(FILE* fp, long offset, int fromwhere)
                fp-> 所需要操作的文件指针
                offset-> 以fromwhere参数为起始位置的偏移量
                fromwhere-> (SEEK_SET <-> 0 <-> 文件开头)
                            (SEEK_CUR <-> 1 <-> 位置指针的当前位置)
                            (SEEK_END <-> 2 <-> 文件末尾)

    功能: 按照需要任意移动位置指针

    返回值: 成功则返回0, 否则返回非0值
    
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
        fseek(fpout, -sizeof(sd[i])*(i+1), 2);
        fread(&sd[i], sizeof(sd[i]), 1, fpout);
        printf("%s\t%s\t%d\n", sd[i].name, sd[i].nu, sd[i].score);
    }
    fclose(fpout);

    return 0;
}
