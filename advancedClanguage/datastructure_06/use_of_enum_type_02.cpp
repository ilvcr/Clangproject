/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Sat 05 May 2018 12:39:32 PM CST
 @File Name: use_of_enum_type_02.cpp
 @Description:  判断用户选择
************************************************************************/

#include<stdio.h>
#include<conio.h>

enum answ{
    Yes,
    No,
    Error
};

enum answ answer()
{
    enum answ ans;
    char c;
    printf("\nPlease enter your elect: ");
    c = getch();
    putchar(c);
    if('Y'==c || 'y'==c)
        ans = Yes;
    else if('N'==c || 'n'==c)
        ans = No;
    else
        ans = Error;

    return ans;
}

int main(int argc, char * argv[])
{
    enum answ ans;
    while(1)
    {
        ans = answer();
        if(ans==Yes)
            printf("\nYour elect is Yes!");
        else if(ans==No)
            printf("\nYour elect is No!");
        else
            printf("\nenter is error!");
    }

    return 0;
}
