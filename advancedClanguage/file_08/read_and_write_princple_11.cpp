/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Sat 12 May 2018 04:40:37 PM CST
 @File Name: read_and_write_princple_11.cpp
 @Description:  按照磁盘文件进行读写
************************************************************************/

/*
3)--->>>
    按照磁盘进行读写操作的两个函数: fprintf 和 fscanf

1->
    fprintf函数
        原形: int fprintf(FILE* fp, char* format [, argument]);
        功能: fprintf()函数根据指定的format(格式)写入(参数)到由fp(文件指针)指定的文件中,
                fprintf()只能和printf()一样工作

        返回值: 读写成功则返回输出的字符数, 错误则返回负数


2->
    fscanf函数
        原形: int fscanf(FILE* fp, char* format,[argument...]);
        功能: 向fp文件指针所指向的文件中写入字符
        返回值: 读写成功则返回实际读出的数据个数, 若文件中没有数据则返回0 ,
                    失败则返回EOF
*/

#include<stdio.h>

int main(int argc, char** argv)
{
    FILE* fpin;
    fpin = fopen("text.txt", "w");

    if(NULL == fpin)
    {
        printf("OPEN FAILED!!!\n");
        return 0;
    }

    int i, j;
    for(i=1;i<10;i++)
    {
        for(j=1;j<i+1;j++)
        {
            fprintf(fpin, "%d X %d = %d\t", j, i, j*i);
        }
        fprintf(fpin, "\n");

    }

    fclose(fpin);

    return 0;
}
