/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Wed 02 May 2018 02:35:01 PM CST
 @File Name: big_and_little_endian_judgments_04.cpp
 @Description:  大端和小端模式地判断
************************************************************************/

#include<stdio.h>

int main(int argc, char * argv[])
{
    int a;
    int *pa;

    pa = &a;
    
    a = 0x11223344;

    if(0x44==*(char*)pa)
        printf("小端模式! \n");
    else
        printf("大端模式! \n");

    return 0;
}
