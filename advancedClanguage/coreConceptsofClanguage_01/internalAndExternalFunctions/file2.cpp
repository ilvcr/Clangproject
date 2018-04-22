/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Tue 17 Apr 2018 09:28:41 PM CST
 @File Name: file2.cpp
 @Description:
************************************************************************/

#include "file.h"

extern void sort(stu student[], int n)
{
    int i, j, k;
    stu temp;

    for(i=0;i<n-1;i++)
    {
        k = i;
        for(j=i+1;j<n;j++)
        {
            if (student[j].score < student[k].score)
                k = j;
        }
        if(k != i)
        {
            temp = student[i];
            student[i] = student[k];
            student[k] = temp;
        }
    }

    printf("Use select top sortid result is:\n");

    return ;
}
