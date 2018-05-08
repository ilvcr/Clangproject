/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Sat 05 May 2018 12:47:50 PM CST
 @File Name: use_of_enum_type_03.cpp
 @Description:  强制转换枚举类型中的均值为整数值得枚举类型变量直接赋整数值
************************************************************************/

#include<stdio.h>

int main(int argc, char * argv[])
{
    enum num{
        one,
        two,
        three
    }a;
    a = (enum num)0;
    if(a==one)
        printf("将整数值通过强制转换成功赋值给枚举类型变量a\n");
    else
        printf("赋值失败!\n");

    return 0;
}
