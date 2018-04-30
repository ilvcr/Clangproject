/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Sun 29 Apr 2018 12:51:10 AM CST
 @File Name: custom_data_types_stored_in_memory.cpp
 @Description:  自定义数据类型在内存的存放方式
************************************************************************/

#include<stdio.h>

#define N 4

struct _stu
{
    char name[22];
    int score;
}stu[N];

int main(int argc, char * argv[])
{
    int i = 0;
    printf(" 自定义结构类型 _stu 占用的内存大小为: %d\n", sizeof(_stu));

    for(i;i<N;i++)
        printf("&stu[%d]=%u\n", i, &stu[i]);


    return 0;
}
