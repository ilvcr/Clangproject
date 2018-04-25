/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Wed 25 Apr 2018 11:48:50 PM CST
 @File Name: selectiveifbase.cpp
 @Description:   将一个学生的数学成绩归类为优（90<=score<=100）、 良（80<=score<90）、 中
                     （70<=score<80）、 及格（60<=score<70）、 差（score<60）。 
************************************************************************/

#include<stdio.h>

int main(int argc, char * argv[])
{
    int score;
    printf("请输入学生的数学成绩 :");
    scanf("%d", &score);

    if(score<60 && score>=0)
        printf("该学生的数学成绩类别为 : 差 \n");
    else if(score<70 && score>=60)
        printf(" 该学生的数学成绩类别为 : 及格 \n");
    else if(score<80 && score>=70)
        printf(" 该学生的数学成绩类别为 : 中 \n");
    else if(score<90 && score>=80)
        printf(" 该学生的数学成绩类别为 : 良 \n");
    else if(score<=100 && score>=90)
        printf(" 该学生的数学成绩类别为 : 优 \n");
    else
        printf(" 输入出错 !!!\n");
    
    return 0 ;
}
