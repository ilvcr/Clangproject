/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Sat 05 May 2018 12:06:06 PM CST
 @File Name: use_of_enum_type_01.cpp
 @Description:  枚举类型的使用以及在使用中的注意事项
                    ||||linux下无conio.h的问题尚未解决||||
************************************************************************/

#include<stdio.h>
#include<curses.h>
//#include<conio.h>

enum Bool{
    False,
    True
};

enum Bool is_number(char c)
{
    if(c>='0' && c<='9')
        return True;
    else
        return False;
}

int main(int argc, char * argv[])
{
    char c;
    enum Bool ret;
    while(1)
    {
        printf("\n请输入: ");
//        system("stty -echo");
//        c = getchar();
//        system("stty echo");
        c = getch();
        putchar(c);
        ret = is_number(c);
        if(ret)
            printf("\n输入的是数字字符!");
        else
            printf("\n输入的是非数字字符!");
    }

    return 0;
}
