/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Mon 07 May 2018 09:15:41 PM CST
 @File Name: use_of_struct_points_noconst_07.cpp
 @Description:  直接定义的结构体类型的指针变量的使用方法
************************************************************************/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct stu{
    char name[10];
    char num[10];
    double score;
    char sex[4];
    int age;
};

int main(int argc, char ** argv)
{
    struct stu *p_per1 = (struct stu*)malloc(sizeof(struct stu));

    strcpy((*p_per1).name, "xiaoming");
    strcpy((*p_per1).num,"32414141");
    strcpy((*p_per1).sex,"nv");
    (*p_per1).score = 2424;
    (*p_per1).age = 23;
    printf("name:%s\tnum:%s\tscore:%.2lf\tsex:%s\tage:%d\n",
            p_per1->name, p_per1->num, p_per1->score, p_per1->sex, p_per1->age);

    struct stu *p_per2 = (struct stu*)malloc(sizeof(struct stu));

    strcpy(p_per2->name, "xiaosdang");
    strcpy(p_per2->num,"32414453531");
    strcpy(p_per2->sex,"nv3");
    p_per2->score = 2425;
    p_per2->age = 22;
    printf("name:%s\tnum:%s\tscore:%.2lf\tsex:%s\tage:%d\n",
            (*p_per2).name, (*p_per2).num, (*p_per2).score, (*p_per2).sex, (*p_per2).age);

    return 0;
}
