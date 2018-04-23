/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Mon 23 Apr 2018 07:06:53 PM CST
 @File Name: definefprintExample.cpp
 @Description:  fprintf()  函数原型为：
                     int printf(FILE *stream,char *format [,argument])
                             这个函数的功能为根据指定的 format 格式发送消息到 
                                stream（流） 指定的文件中， 在前 面的宏中使用 stdout 表示标准输出， 
                                        fprintf() 的返回值是输出的字符数， 发生错误时返回一个负值。


                #define printf(tem, ...) fprintf(stdout, tem, ## __VA_ARGS__)
**************************************************************************/

#include<stdio.h>

#define print(temp, ...) fprintf(stdout, temp, ##__VA_ARGS__)

int main(int argc, char * argv[])
{
    print("Hello World --------%d\n", 1111);

    return 0;
}

/*
进行宏替换，“print("hello world\n")”变为“fprintf(stdout, "hello world\n",)”后， 
会发现后面出现了一个逗号导致发生错误。 如果有“##”， 就不会出现这样的错误， 
这是因为可变参数被忽略或为空，“##”操作将使预处理器去除它前面的那个逗号。 
如果存在可变参数，“##”也能正常工作。
*/
