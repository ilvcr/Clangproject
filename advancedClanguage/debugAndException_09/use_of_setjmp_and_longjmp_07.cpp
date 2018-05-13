/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Sun 13 May 2018 01:57:49 AM CST
 @File Name: use_of_setjmp_and_longjmp_07.cpp
 @Description:  通过setjmp函数和longjmp函数来实现非本地跳转
*************************************************************************/


#include<stdio.h>
#include<setjmp.h>

jmp_buf buf;

void exception(void)
{
    longjmp(buf, 1);
}

int main(int argc, char ** argv)
{
    double a, b;

    printf("请输入被除数: ");
    scanf("%lf", &a);
    printf("请输入除数: ");

    if(0 == setjmp(buf))
    {
        scanf("%lf", &b);
        if(0 == b)
            exception();
        printf("相除的结果为: %f\n", b/a);
    }
    else
        printf("出现错误除数为0\n");

    return 0;
}
