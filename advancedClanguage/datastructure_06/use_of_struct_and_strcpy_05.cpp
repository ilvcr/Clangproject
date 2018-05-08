/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Mon 07 May 2018 08:56:10 PM CST
 @File Name: use_of_struct_and_strcpy_05.cpp
 @Description:  将结构体的成员变量定义为数组类型, 可以利用strcpy()函数对其进行初始化
************************************************************************/

#include<stdio.h>
#include<string.h>

struct stu{
    char name[10];
    char num[10];
    double score;
    char sex[4];
    int age;
};

int main(int argc, char **argv)
{
    struct stu per;
    strcpy(per.name, "xiaoming");
    strcpy(per.num, "124234252");
    strcpy(per.sex, "男");
    per.score = 454;
    per.age = 22;
    
    printf("name:%s\nnum:%s\nscore:%lf\nsex:%s\nage:%d\n",
            per.name, per.num, per.score, per.sex, per.age);

    return 0;
}
