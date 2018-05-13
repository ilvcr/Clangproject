/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Sat 12 May 2018 10:57:29 PM CST
 @File Name: use_of_assert_in_pro_01.cpp
 @Description:
************************************************************************/

#include<stdio.h>
#include<assert.h>

int main(int argc, char **argv)
{
    int i;
    i = 1;
    assert(i++);
    printf("通过assert宏进行i++运算之后的i值为: %d\n", i);

    return 0;
}
