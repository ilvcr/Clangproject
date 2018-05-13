/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Sat 12 May 2018 03:55:36 PM CST
 @File Name: read_and_write_princple_09.cpp
 @Description:  按照字符串进行读写操作的两个函数: fgets, fputs
************************************************************************/

/*
2)--->>>

1->
    fgets函数

        原型: char* fgets(char* s, int size, FILE* fp)
        功能: 该函数从fp所指的文件内读入字符并存到参数s所致的内存空间,直到出现换行字符,
                读到文件尾或已读了size-1个字符为止,最后加上NULL标示字符串结束

        返回值: 读写成功则返回s指针, 否则返回NULL


2->
    fputs函数
        
        原形: int fputs(char* string, FILE* fp)
        功能: 将string所指向的字符串写入fp所指定的文件中区

        返回值: 读写成功返回为0, 否则返回非0值
*/

#include<stdio.h>

int main(int argc, char** argv)
{
    FILE* fpin;
    char* string[4] = {"Hello WOrld!", "Hello Bigloomy!", "Happy", "GLoomy!"};
    fpin = fopen("text.txt", "w");
    if(NULL == fpin)
    {
        printf("OPEN FAILED!!\n");
        return 0;
    }

    int i = 0;
    for(i=0;i<4;i++)
        fputs(string[i], fpin);

    fclose(fpin);

    return 0;
}
