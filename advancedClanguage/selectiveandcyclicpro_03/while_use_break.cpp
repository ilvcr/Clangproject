/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Fri 27 Apr 2018 02:25:42 PM CST
 @File Name: while_use_break.cpp
 @Description:  break 语句在 while循环中的使用, 求一个数 n 的阶
                    乘， 其中， n 由键盘输入， 要求 n 的值不大于 20
************************************************************************/

#include<stdio.h>

int main(int argc, char * argv[])
{
    int n;
    printf("请输入 n 值 :");
    scanf("%d", &n);

    if(n>20 || n<0)
    {
        printf("输入出错 !\n");
        return 0;
    }

    int num = 1;
    printf("%d 的阶乘为 :",n);
    while(1)
    {
        if(n<0)
            break;

        if(0 == n)
            num *= 1;

        else
            num *= n;

        n--;
    }

    printf("%d\n",num);
    return 0;
}


/*
在while循环的表达式中使用了一个非零常量1，所以这个while循环是一个死循环， 
但是在 while 循环体内通过一个if语句来判断当前的n值进而决定是否执行 break 
语句来退出循环体。 当 n 的值为负时， 执行 break 语句， 退出while 循环。
*/
