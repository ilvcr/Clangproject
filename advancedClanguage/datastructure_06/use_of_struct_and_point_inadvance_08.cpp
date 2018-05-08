/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Mon 07 May 2018 09:27:08 PM CST
 @File Name: use_of_struct_and_point_inadvance_08.cpp
 @Description:  实现对已经初始化了的结构体数组按照学生的总分进行排名，分数由高到低
************************************************************************/

#include<stdio.h>
#include<stdlib.h>

#define  N  4

struct stu{
    char *name;
    char *num;
    double score;
    char *sex;
    int age;
}per[N] = {
            {"张三", "12345", 123.3, "女", 20},
            {"李四", "12346", 124.6, "男", 22},
            {"王五", "12347", 125.3, "男", 25},
            {"陈六", "12348", 127.9, "女", 24}
            };


int sort(struct stu *p_per, int n)
{
    int i, j, k;
    struct stu temp;

    for(i=0;i<n-1;i++)
    {
        k = i;
        for(j=i+1;j<n;j++)
        {
            if (p_per[j].score>p_per[k].score)
            {
                k=j;
            }
        }
        if(k!=i)
        {
            temp=p_per[i];
            p_per[i]=p_per[k];
            p_per[k]=temp;
        }
    }

    return 0;
}

int print(struct stu *p_per, int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("name:%s\tnum:%s\tscore:%.2lf\tsex:%s\tage:%d\n",
                p_per->name, p_per->num, p_per->score, p_per->sex, p_per->age);
        p_per++;
    }

    return 0;
}

int main(int argc, char **argv)
{
    sort(per, N);
    print(per, N);

    return 0;
}
