/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Tue 24 Apr 2018 04:42:13 PM CST
 @File Name: usedefineinString.cpp
 @Description:   在字符串中使用宏
************************************************************************/

#include<stdio.h>

#define STR "Hello World"

int main(int argc, char * argv[])
{
    char *STRING = "This is a string";
    
    printf("字符串中的宏%s\n", "STR!");  //宏名出现在字符串中把宏按照字符串来处理

    printf("字符串中的宏: STR和不在字符串中的宏: %s\n", STR);

    printf("出现在字符串变量名中的宏: %s\n", STRING);

    return 0;
}


/*
不要在字符串中使用宏， 如果宏名出现在字符串中， 那么将把宏按照字符串来处理


出现在字符串中的宏被编译器按照字符串来处理， 因此在使用宏时不能在字符串中使用宏， 
否则宏将被当成一般字符串来处理
*/
