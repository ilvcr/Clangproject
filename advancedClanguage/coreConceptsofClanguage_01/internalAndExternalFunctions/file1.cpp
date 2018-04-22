/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Tue 17 Apr 2018 09:21:49 PM CST
 @File Name: file1.cpp
 @Description:
************************************************************************/

#include "file.h"

static void input(stu student[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Please enter students name:");
        scanf("%s",&student[i].name);
        printf("Please enter students score:");
        scanf("%d",&student[i].score);
    }
    return ;
}

int main(void)
{
    stu student[4];
    extern void sort(stu student[],int n);
    extern void bubble_sort(stu student[],int n);
    extern void print(stu student[],int n);
    input(student,4);

    sort(student,4);
    print(student,4);

    bubble_sort(student,4);
    print(student,4);

    return 0;
}
