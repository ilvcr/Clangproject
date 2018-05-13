/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Sun 13 May 2018 01:42:51 AM CST
 @File Name: use_of_assert_in_pro_05.cpp
 @Description:  use_of_assert_in_pro_04.cpp中do{}while(0)的好处
************************************************************************/

#include<stdio.h>

void print_1(void)
{
    printf("成功调用print_1函数\n");
}

void print_2(void)
{
    printf("成功调用print_2函数\n");
}

#define printf_value() \
do{\
    print_1();\
    print_2();\
  }while(0)

int main(int argc, char ** argv)
{
    int i = 0;
    if(i==1)
    {
        printf_value();
    }

    return 0;
}
