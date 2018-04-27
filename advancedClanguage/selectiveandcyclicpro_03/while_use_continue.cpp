/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Fri 27 Apr 2018 02:33:27 PM CST
 @File Name: while_use_continue.cpp
 @Description:  continue 语句在 while 循环中的作用是结束本次循环体的执行， 
                    不再执行其后的循环体，跳转到表达式处开始新一轮的循环判断。


                    continue 语句在 while 循环体中的使用, 
                        打印出 1 到30 之间所有 3 的倍数的整数
************************************************************************/

#include<stdio.h>

int main(int argc, char * argv[])
{
    int n = 1;
    int num = 0;

    while(n<31)
    {
        if(0 != n%3)
        {
            n++;
            continue;
        }

        printf("%d\t", n);
        num++;
        if(0 == num%5)
            printf("\n");
        n++;
    }

    return 0;
}
