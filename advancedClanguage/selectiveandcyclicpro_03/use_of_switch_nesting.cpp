/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Fri 27 Apr 2018 11:42:51 AM CST
 @File Name: use_of_switch_nesting.cpp
 @Description:  显示班级总分前三名同学的各科成绩， 
                    科目包括数学（m）、 英语（e）、 语文（c）
************************************************************************/

#include<stdio.h>
#include<conio.h>

int main(int argc, char * argv[])
{
    char ch;
    int num;

    printf(" 请输入学生的名次 num( 取值为 1、 2、 3):");
    num = getch()
    putchar(num);
    printf("\n 请输入所要查询的科目前面 ch( 取值为 m( 数学 )、 e( 英语 )、 c( 语文 )):");

    ch = getch()
    putchar(ch);
    printf("\n");

    switch(num){
            case '1':
                switch(ch){
                        case 'm':
                            printf(" 数学成绩为： 98\n");
                            break;

                        case 'e':
                            printf(" 英语成绩为： 97\n");
                            break;

                        case 'c':
                            printf(" 语文成绩为： 95\n");
                            break;

                        default:
                            printf(" 输入出错 !\n");
                            return ;
                }
                break;

            case '2':
                switch(ch){
                        case 'm':
                            printf(" 数学成绩为： 98\n");
                            break;
                        
                        case 'e' :
                            printf(" 英语成绩为： 89\n");
                            break;
                        
                        case 'c':
                            printf(" 语文成绩为： 87\n");
                            break;
                        
                        default:
                            printf(" 输入出错 !\n");
                            return ;
                }
                break;

            case '3':
                switch(ch){
                        case 'm':
                            printf(" 数学成绩为： 98\n");
                            break;
                        
                        case 'e':
                            printf(" 英语成绩为： 78\n");
                            break;
                        
                        case 'c':
                            printf(" 语文成绩为： 75\n");
                            break;
                        
                        default:
                            printf(" 输入出错 !\n");
                            return ;
                }
                break;

            default:
                printf("输入出错 !\n");
    }

    return 0;
}
