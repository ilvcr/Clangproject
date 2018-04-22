/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Tue 17 Apr 2018 09:38:43 PM CST
 @File Name: file4.cpp
 @Description:
************************************************************************/

#include "file.h"

void print(stu student[], int n)
{
    int j;
    for(j=0;j<n;j++)
    {
        printf("student %s's sum scores is:%d\n ",student[j].name,student[j].score);
    }

    return ;
}
