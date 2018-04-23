/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Sun 22 Apr 2018 10:11:22 PM CST
 @File Name: inoutputchar_pro003.cpp
 @Description:  把输入一次一个字符地复制到输出
************************************************************************/

/*
基本思想：

读一个字字符
while(该字符不是文件结束标识符)
    输出刚读入的字符
    读下一个字符
*/


#include<stdio.h>

/*copy input to output; 1st version */

int main()
{
    int c;
    
    printf("Please enter a char:\n");
    c = getchar();

    while (c != EOF)
    {
        putchar(c);
        printf("\nPlease enter next char:\n");
        c = getchar();
    }
}
