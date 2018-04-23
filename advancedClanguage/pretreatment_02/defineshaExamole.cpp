/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Mon 23 Apr 2018 07:15:56 PM CST
 @File Name: defineshaExamole.cpp
 @Description:  宏定义中“#”介绍示例
************************************************************************/


#include<stdio.h>

#define return_exam(p) if(!(p)){printf("error:"#p" file_name:%s\tfunction_name:%s\tline:%d.\n",__FILE__, __func__ , __LINE__); return 0;}


int print()
{
    return_exam(0);

    return 0;
}

int main(int argc, char * argv[])
{
    print();
    printf("Hello World!!!!\n");

    return 0;
}

/*
“#”的作用就是对其后面的宏参数进行字符串化操作， 即在对宏变量进行替换之后在其左右各加上一个双引号， 
这就使得“"#p"”变为了“""p""”，这样两边的“""”就消失了。
*/
