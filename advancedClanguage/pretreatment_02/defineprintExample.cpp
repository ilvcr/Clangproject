/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Mon 23 Apr 2018 05:26:11 PM CST
 @File Name: defineprintExample.cpp
 @Description:          使用宏定义实现变参
                                #define print(...) printf(__VA_ARGS__)
************************************************************************/


#include<stdio.h>

#define print(...) printf(__VA_ARGS__)

int main(int argc, char * argv[])
{
    print("Hello World ------ %d\n", 111111);

    return 0;
}

/*
#define print(...) printf(__VA_ARGS__)
在这个宏中，“...”指可变参数。 可变参数的实现方式就是使用“...”所代表的内容替代__VA_ARGS__， 
*/
