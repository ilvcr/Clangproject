/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Fri 27 Apr 2018 01:43:54 PM CST
 @File Name: goto_example.cpp
 @Description:  使用 goto 语句建立循环实现了 1 到 100 之间所有整数的累加和。
************************************************************************/

#include<stdio.h>

int main(int argc, char * argv[])
{
    int num, i;
    int sum;
    num = 0;
    sum = 0;

loop:
    sum += num;
    num++;
    if(num<101)
        goto loop;
    
    printf(" 使用 goto 语句建立循环求得的 sum=%d\n",sum);

    sum = 0;
    for(i=0;i<101;i++)
    {
        sum += i;
    }
    printf(" 使用 for 循环求得的 sum=%d\n",sum);


    return 0;    
}
