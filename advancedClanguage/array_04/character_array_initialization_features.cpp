/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Sun 29 Apr 2018 01:40:01 AM CST
 @File Name: character_array_initialization_features.cpp
 @Description:  字符数组的初始化特点
************************************************************************/


#include<stdio.h>

#define  M  20

int main(int argc, char * argv[])
{
    int i = 0;
    char arr[M] = {'H','e','l','l','o',' ','W','o','r','l','d','!'};
    
    for(i;i<M;i++)
    {
        printf("%c",arr[i]);
    }

    printf("\n*****************************\n");
/*
    for(i;arr[i]!='\0';i++)
    {
        printf("%c", arr[i]);
    }
*/
    printf("\n");

    return 0;
}
