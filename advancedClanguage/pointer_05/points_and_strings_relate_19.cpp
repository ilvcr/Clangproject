/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Fri 04 May 2018 11:39:15 AM CST
 @File Name: points_and_strings_relate_19.cpp
 @Description:  通过字符指针初始化字符串
************************************************************************/


#include<stdio.h>

int main(int argc, char * argv[])
{
    char str[20] = "Hello World!!!";
    str[6] = 'b', str[7] = 'i', str[8] = 'g', str[9] = 'l';


    printf("%s\n",str);

    return 0;
}
