/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Mon 07 May 2018 09:03:41 PM CST
 @File Name: use_of_points_and_struct_06.cpp
 @Description:  结构体指针的使用
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
    struct stu per, *p_per;
    strcpy(per.name, "xiaoming");
    strcpy(per.num, "2324252423");
    strcpy(per.sex, "男");
    per.score = 23424;
    per.age = 22;

    p_per = &per;
    printf("通过结构体变量per引用结构体成员\n");
    printf("name:%s\nnum:%s\nscore:%lf\nsex:%s\nage:%d\n",
            per.name, per.num, per.score, per.sex, per.age);

    printf("\n通过结构体指针p_per引用结构体成员方法一\n");
    printf("name:%s\nnum:%s\nscore:%lf\nsex:%s\nage:%d\n",
            (*p_per).name, (*p_per).num, (*p_per).score, (*p_per).sex, (*p_per).age);

    printf("\n通过结构体指针p_per引用结构体成员方法二\n");
    printf("name:%s\nnum:%s\nscore:%lf\nsex:%s\nage:%d\n",
            p_per->name, p_per->num, p_per->score, p_per->sex, p_per->age);


    return 0;
}
