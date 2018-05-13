/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Sat 12 May 2018 05:01:54 PM CST
 @File Name: read_and_write_princple_13.cpp
 @Description:  按组进行读写
************************************************************************/

/*
4)--->>>
        按组进行读写操作的两个函数为: fwrite 和 fread

1->
    fwrite函数:
        原形: size_t fwrite(const void*buffer, size_t size, size_t count, FILE* fp);
        功能: 将一个数据块写入fp文件指针指向的文件中,
                其中:
                    buffer参数是所需要输出数据的地址
                    size是每次所要写入的字节数
                    count是所要写入的次数
                    fp是所要写入的目标文件指针

        返回值: 读写成功则返回写入的字节数


2->
    fread函数:
        原形: size_t fread(void *buffer, size_t size, size_t count, FILE* fp);
        功能: 从fp文件指针所指向的文件中读取一个数据块

        返回值: buffer是所要读入内存中的地址, size是所要读取的数据块的字节数,
                    count是所要读取的数据块的个数
*/

#include<stdio.h>

#define  N  4

struct stu{
        char name[20];
        char nu[10];
        int score;
}st[N] = {{"lixiaopeng", "21010123", 326},
        {"zhangdidie", "21010234", 562},
        {"pengxiaomin", "201010987", 456},
        {"wangmeimei", "201010678", 258},
};

int main(int argc, char **argv)
{
    FILE* fpin;
    fpin = fopen("bina.txt", "w");
    if(NULL == fpin)
    {
        printf("OPEN FAILED!!\n");
        return 0;
    }

    int i;
    for(i=0;i<N;i++)
    {
        fwrite(&st[i], sizeof(st[i]), 1, fpin);
    }

    fclose(fpin);

    return 0;
}
