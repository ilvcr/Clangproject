/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Fri 27 Apr 2018 02:38:07 PM CST
 @File Name: do_while_example.cpp
 @Description:  求 1 到 n 之间所有正整数的平方和， n 由输入确定
************************************************************************/

#include<stdio.h>

int main(int argc, char * argv[])
{
    int n;
    int sum = 0;
    printf("请输入 n:");
    scanf("%d", &n);
    printf("1 到 %d 之间所有正整数的平方和为 :",n);

    do{
        sum += n*n;    
    }while(--n);

    printf("%d\n", sum);


    return 0;
}
