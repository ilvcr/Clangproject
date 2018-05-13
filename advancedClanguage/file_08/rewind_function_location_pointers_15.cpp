/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Sat 12 May 2018 05:42:07 PM CST
 @File Name: rewind_function_location_pointers_15.cpp
 @Description:  对打开的文件进行两次备份操作
************************************************************************/

/*
rewind函数
    原形: viod rewind(FILE* fp);
    功能: 将位置指针重新定位到文件的开头
    返回值: 无
*/

#include<stdio.h>

int main(int argc, char **argv)
{
    FILE* fpin, * fpout1, * fpout2;
    fpin = fopen("text1.txt", "r");
    fpout1 = fopen("text2.txt", "w");
    fpout2 = fopen("text3.txt", "w");

    if(NULL == fpin || NULL == fpout1 || NULL == fpout2)
    {
        printf("OPENFAILED!!!\n");
        return 0;
    }

    while(!feof(fpin))
        fputc(fgetc(fpin), fpout1);

    rewind(fpin);

    while(!feof(fpin))
        fputc(fgetc(fpin), fpout2);

    fclose(fpin);
    fclose(fpout1);
    fclose(fpout2);

    return 0;
}
