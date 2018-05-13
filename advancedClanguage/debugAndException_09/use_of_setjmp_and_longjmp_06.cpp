/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Sun 13 May 2018 01:50:12 AM CST
 @File Name: use_of_setjmp_and_longjmp_06.cpp
 @Description:  使用longjmp函数进行异常处理
************************************************************************/

/*
longjmp函数原型: void longjmp(jmp_buf env, int value);

setjmp函数原型: int(jmp_buf env);
*/

#include<stdio.h>
#include<setjmp.h>

jmp_buf buf;

int main(int argc, char **argv)
{
    double a, b;

    printf("请输入被除数: ");
    scanf("%lf", &a);
    printf("请输入除数: ");

    if(0 == setjmp(buf))
    {
        scanf("%lf", &b);
        if(0 == b)
        {
            longjmp(buf, 1);
        }
        printf("相除的结果为: %f\n", b/a);
    }
    else
    {
        printf("出现错误除数为0\n");
    }

    return 0;
}
