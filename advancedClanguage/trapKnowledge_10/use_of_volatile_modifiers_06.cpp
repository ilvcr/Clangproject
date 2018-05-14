/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Mon 14 May 2018 01:18:52 PM CST
 @File Name: use_of_volatile_modifiers_06.cpp
 @Description:
************************************************************************/

#include<stdio.h>

int main(int argc, char **argv)
{
    int a = 12;
    printf("a = %d\n", a);

    __asm{mov dword ptr [ebp-4], Oh}

    int b = a;
    printf("b = %d\n", b);

    return 0;
}
