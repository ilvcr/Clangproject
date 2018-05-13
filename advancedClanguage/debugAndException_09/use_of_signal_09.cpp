/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Sun 13 May 2018 12:10:56 PM CST
 @File Name: use_of_signal_09.cpp
 @Description:  模拟signal函数的实现方法
************************************************************************/

/*
signal函数

头文件: #include<signal.h>
原型: void (*signal(int signum, void(*handler)(int)))(int);
功能: 设置某一个信号的对应动作

*/

#include<stdio.h>
#include<stdlib.h>

typedef void (*pfun) ();

pfun signal_call(int a, pfun fun);

pfun signal_call(int a, pfun fun)
{
    return fun;
}

void func()
{
    printf("hello world!!!\n");
}

int main(int argc, char **argv)
{
    pfun p = func;
    signal_call(1, p)();

    return 0;
}


