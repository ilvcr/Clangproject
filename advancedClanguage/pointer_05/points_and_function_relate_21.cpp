/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Fri 04 May 2018 12:32:19 PM CST
 @File Name: points_and_function_relate_21.cpp
 @Description:  利用参数中的数组名成进行自加运算并输出
************************************************************************/

//run ERROR


#include<stdio.h>

int main(int argc, char * argv[])
{
    char *argv[] = {"adfafaedfa.exe", "hello", "World"};
    int i = 0;

    while(i<3)
    {
        printf("%s\t", *argv++);
        i++;
    }

    printf("\n");

    return 0;
}
