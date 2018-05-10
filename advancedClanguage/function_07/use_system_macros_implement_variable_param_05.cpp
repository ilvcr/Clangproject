/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Wed 09 May 2018 02:15:01 PM CST
 @File Name: use_system_macros_implement_variable_param_05.cpp
 @Description:  采用系统提供的宏来实现变参函数
************************************************************************/

#include<stdio.h>
#include<stdarg.h>


int print(int n, ...)
{
    int arg, i;
    va_list p;
    va_start(p ,n);
    for(i=0;i<n;i++)
    {
        arg = va_arg(p, int);
        printf("%d\t", arg);
    }

    printf("\n");
    va_end(p);

    return 0;
}

int main(int argc, char **argv)
{
    print(3, 32, 54, 21);

    return 0;
}

/*
系统实现的变参函数：

typedef char * va_list;
#define  _INTSIZEOF(n)    ( (sizeof(n) + sizeof(int) - 1) & ~(sizeof(int) - 1 ))  //实现内存中的字节对齐

#define  va_start(ap, v)  ( ap = (va_list)&v + _INTSIZEOF(v) )
//先得到v地址,然后将其转换为char指针,再加上变量v所占用的内存大小,使指针ap指向下一个参数

#define  va_arg(ap, t)    ( *(t *)((ap += _INTSIZEOF(t)) - _INTSIZEOF(t)) )
//将ap强制转换为此时参数的类型t的指针

#define  va_end(ap)       ( ap = (va_list)0 )  //清除ap指针，表明在接下来的部分不再使用该指针变量
*/
