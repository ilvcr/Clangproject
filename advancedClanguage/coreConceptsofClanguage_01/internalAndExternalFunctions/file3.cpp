/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Tue 17 Apr 2018 09:33:42 PM CST
 @File Name: file3.cpp
 @Description:
************************************************************************/

#include "file.h"

void bubble_sort(stu student[], int n)
{
    int i,j,flag;
    stu temp;

    for(i=0;i<n-1;i++)
    {
        flag = 1;
        for(j=0;j<n-i-1;j++)
        {
            if (student[j].score < student[j+1].score)
            {
                temp = student[j];
                student[j] = student[j+1];
                student[j+1] = temp;
                flag = 0;
            }
        }

        if (1 == flag)
            break;
    }

    printf("Use bubble down sort's result is:\n");

    return ;
}
