/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Fri 27 Apr 2018 02:17:45 PM CST
 @File Name: for_continue_example.cpp
 @Description:  含有 continue 语句的 for 循环求 1 到 100 之间不能被 5 整除的整数之和。
************************************************************************/

#include<stdio.h>

int main(int argc, char * argv[])
{
    int i;
    int sum = 0;

    for(i=1;i<101;i++)
    {
        if(0 == i%5)
            continue;
        sum+=i;
    }

    printf("1 到 100 之间不能被 5 所整除的整数之和为 :%d\n",sum);

    return 0;
}
