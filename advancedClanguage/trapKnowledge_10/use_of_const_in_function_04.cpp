/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Mon 14 May 2018 12:12:11 AM CST
 @File Name: use_of_const_in_function_04.cpp
 @Description:  const在函数声明时修饰参数
************************************************************************/

/*
void *memmove(void* dest, const void* src, size_t count);
功能为由src所指内存区域赋值count个字节到dest所指向的内存区域，用于按字节方式复制字符串(内存).

1->
    dest是表明将字符串复制到哪里去即目的地，这段内存必须是可写的
2->
    src是要被复制的字符串，这段内存区域仅进行制度操作，不进行写操作
*/

#include<stdio.h>
#include<string.h>

int main(int argc, char **argv)
{
    const char* str = "hello";
    char buf[10];
    memmove(buf, str, 6);
    printf("%s\n", buf);

    return 0;
}
