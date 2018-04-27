/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Thu 26 Apr 2018 11:40:21 PM CST
 @File Name: use_switch_and_while.cpp
 @Description:  从键盘输入一个英文字符， 不区分大小写， 通过 switch 语句判断该字符是否为元音字符
************************************************************************/

#include<stdio.h>
//#include<conio.h>
#include<curses.h>


int main(int argc, char * argv[])
{
    char ch;
    printf(" 按下 esc 键即可结束运行 !\n");
    
    while(1)
    {

        printf(" 请输入字符 :");
        if((ch=getch())==27)
            break;
        putchar(ch);

        if(ch>='a' && ch<='z')
        {
            ch = ch-'a'+'A';
        }

        if(ch<'A' || ch>'Z')
        {
            printf("\n 输入出错 ! 请重新输入 .\n");
            continue;
        }

        switch(ch){
                case 'A':
                case 'E':
                case 'I':
                case 'O':
                case 'U':
                    printf("\n 该字符为元音字符 !\n");
                    break;

                default:
                    printf("\n 该字符非元音字符 !\n");

        }
    }
    return 0;
}
