/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Sun 13 May 2018 11:53:25 AM CST
 @File Name: use_of_setjmp_and_longjmp_08.cpp
 @Description:  通过setjmp函数和longjmp函数实现非本地跳转
************************************************************************/

#include<stdio.h>
#include<setjmp.h>
#include<stdlib.h>
#include<string.h>

jmp_buf buf;

int sum(int a[], int n)
{
    int i, total;

    if(n<=0)
        longjmp(buf, 1);

    total = 0;
    for(i=0;i<n;i++)
    {
        total += a[i];
    }

    return total;
}

float average(int score[], int n)
{
    int total, i;
    float avg;
    total = 0;

    for(i=0;i<n;i++)
    {
        if(score[i] < 0)
        {
            longjmp(buf, 2);
        }

        total += score[i];
    }
    avg = total / n;

    return avg;
}

int main(int argc, char **argv)
{
    int value, total;
    char str[50];
    int a[3] = {1, 2, 3}, score[3] = {21, -56, 25};
    float avg;

    value = setjmp(buf);
    if(0 == value)
    {
        total = sum(a, 3);
        avg = (score, 3);
    }

    switch(value)
    {
        case 1:
            strcpy(str, "error: 传递给sum()函数的参数n为负");
            break;

        case 2:
            strcpy(str, "error: 传递给average()函数的学生的成绩为负数");
            break;

        default:
            strcpy(str, "error: 其他错误值");
            break;
    }
    printf("%s 返回值为: %d\n", str, value);

    return 0;
}
