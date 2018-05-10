/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Wed 09 May 2018 02:31:57 PM CST
 @File Name: use_macros_implement_variable_param_06.cpp
 @Description:  通过自定义宏来实现变参函数
************************************************************************/

#include<stdio.h>

typedef char * va_list;
#define    va_start(ap, v)    ( ap = (va_list)&v + sizeof(v) )
#define    va_arg(ap, t)      ( *(t*)((ap += sizeof(t)) - sizeof(t)) )
#define    va_end(ap)         ( ap = (va_list)0 )

int print(int n, ...)
{
    int arg, i;
    va_list p;
    va_start(p, n);

    for(i=0;i<n;i++)
    {
        arg = va_arg(p, int);
        printf("%d\t", arg);
    }

    printf("\n");
    va_end(p);

    return 0;
}

int main(int argc, char ** argv)
{
    print(4, 12, 34, 45, 78);

    return 0;
}
