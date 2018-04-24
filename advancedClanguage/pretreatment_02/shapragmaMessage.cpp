/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Tue 24 Apr 2018 05:30:38 PM CST
 @File Name: shapragmaMessage.cpp
 @Description:  #pragma message(" 消息 ")
************************************************************************/

#include<stdio.h>

#define STR

int main(int argc, char * argv[])
{
    printf(" 学习 #pragma 命令中 message 参数的使用 !\n");

    #ifdef STR
        #pragma message("STR 已经定义过了 ")
    #endif

    return 0;
}

/*
1)->
    #pragma message(" 消息 ")
        不希望运行结果中出现与结果无关的信息， 这时可以使用 #pragma 命令， 
            选择 message 参数来实现信息的打印输出

2)->
    #pragma once
        如果在头文件的开头部分加入这条指令， 那么就能保证头文件只被编译一次

3)->
    #pragma hdrstop
        该指令表示编译头文件到此为止， 后面的无需再编译了。

4)->
     #pragma pack()
        作用是取消之前设置的字节对齐方式， 采用默认的 4字节对齐
    
     ##pragma pack(push)
        作用是保存当前默认的字节对齐方式

     #pragma pack(pop)
        作用是恢复默认的字节对齐方式

5)->
    #pragma warning()
        “#pragma warning(disable ： M N ； once ： H ； error ： K)”表示不显示 M 号和 N 号的警
            告信息， H 号警告信息只报告一次， 把 K 号警告信息作为一个错误来处理

        #pragma warning(disable： M N)
        #pragma warning(once： H)
        #pragma warning(error： K)
            这样的实现方式与前面的“#pragma warning(disable ： M N ； once ： H ； error ： K)”
                是等价的。 也可以使用 #pragma warning(enable： N) 启用 N 号警告信息。
*/
