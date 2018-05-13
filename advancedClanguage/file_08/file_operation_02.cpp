/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Fri 11 May 2018 10:50:44 PM CST
 @File Name: file_operation_02.cpp
 @Description:  对于操作完成的文件一定要使用fclose函数进行关闭操作

 fclose()函数把缓冲区内最后剩余输出到磁盘文件中并释放文件指针和有关的缓冲区
************************************************************************/

#include<stdio.h>

int main(int argc, char **argv)
{
    FILE *fp;
    fp = fopen("edit.txt", "r");
    if(NULL == fp)
    {
        printf("file edit.txt open failed!\n");
        fp = fopen("edit.txt", "wt");
        if(NULL == fp)
        {
            printf("file edit.txt open failed!!\n");
            return 0;
        }
    }

    printf("file edit.txt open successed!\n");
    fclose(fp);

    return 0;
}


