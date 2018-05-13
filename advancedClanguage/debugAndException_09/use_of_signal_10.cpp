/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Sun 13 May 2018 12:18:43 PM CST
 @File Name: use_of_signal_10.cpp
 @Description:  使用signal捕捉除数为0时的异常代码
************************************************************************/

#include<stdio.h>
#include<signal.h>
#include<setjmp.h>
#include<stdlib.h>
#include<float.h>
#include<string.h>


jmp_buf buf;
int err;

void handler(int num)
{
    err = num;
    printf("发生浮点计算异常\n");
    longjmp(buf, 1);
}

int main(int argc, char **argv)
{
    double a, b;
    char str[20];
    int ret;
    _control87(0, _MCW_EM); //开启浮点计算
    
    if(signal(SIGFPE, handler) == SIG_ERR)  //signal(SIGFPE, handler)绑定一个负点计算异常处理函数
    {
        printf("绑定失败\n");
        abort();
    }

    ret = setjmp(buf);
    if(0 == ret)
    {
        printf("请输入被除数: ");
        scanf("%lf", &a);
        printf("请输入除数: ");
        scanf("%lf", &b);
        printf("a /b = %4.3g\n", a / b);
        printf("发生异常时不会被执行的语句\n");
    }

    return 0;
}
