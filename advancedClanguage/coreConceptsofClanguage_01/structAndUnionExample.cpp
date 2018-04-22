/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Thu 19 Apr 2018 04:39:39 PM CST
 @File Name: structAndUnionExample.cpp
 @Description:  用结构体和共用体嵌套定义一个自定义类型来登记学校老师和学生的信息
************************************************************************/

#include<stdio.h>
#include<stdlib.h>

struct infor{
            char name[20];
            char sex[10];
            int age;
            char identity;
            union otherinf{
                    struct{
                            char profession[10];
                            char department[20];
                            double salary;
                    }teacher;

                    struct{
                            char num[20];
                            char department[20];
                            char major[20];
                    }student;
            }perinf;
};

void print(struct infor per[], int n)
{
    int i;

    for(i=0;i<n;i++)
    {
        printf("姓名:%s\t性别:%s\t年龄:%d\t", per[i].name, per[i].sex, per[i].age);
        
        if('s' == per[i].identity)
        {
            printf("学生的学号:%s\t所属的院系:%s\t专业:%s\t\n", per[i].perinf.student.num,
                    per[i].perinf.student.department, per[i].perinf.student.major);
        }
        else
        {
            printf("教师的职称:%s\t所属的院系:%s\t月薪:%6.2f\t\n", per[i].perinf.teacher.profession,                    per[i].perinf.teacher.department, per[i].perinf.teacher.salary);
        }
    }

    return ;
}

void input(struct infor per[], int n)
{
    int i;

    for(i=0;i<n;i++)
    {
        printf("请依次输入姓名、性别、年龄、身份: ");
        scanf("%s%s%d%s", &per[i].name, &per[i].sex, &per[i].age, &per[i].identity);
        if('s' == per[i].identity)
        {
            printf("请依次输入学生的学号, 所属的院系, 专业: ");
            scanf("%s%s%s", &per[i].perinf.student.num, &per[i].perinf.student.department,
                            &per[i].perinf.student.major);
        }
        else if('t' == per[i].identity)
        {
            printf("请依次输入教师的职称, 所属的院系, 月薪: ");
            scanf("%s%s%lf", &per[i].perinf.teacher.profession, &per[i].perinf.teacher.department,
                            &per[i].perinf.teacher.salary);
        }
        else
        {
            printf("输入出错!\n");
            exit(0);
        }
    }

    return ;
}

int main(int argc, char * argv[])
{
    struct infor per[2];
    
    input(per, 2);

    print(per, 2);

    return 0;
}
