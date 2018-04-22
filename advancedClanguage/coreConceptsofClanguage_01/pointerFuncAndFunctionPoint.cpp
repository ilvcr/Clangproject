/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Wed 18 Apr 2018 02:13:32 PM CST
 @File Name: pointerFuncAndFunctionPoint.cpp
 @Description:  在输入字符串中查找指定的字符, 如果查找成功, 
                则打印出所查找的字符串, 如果查找成功, 则给出提示信息
************************************************************************/

#include<stdio.h>

char* (*fun)(char *str, char *substr);

void input(char *str, char *substr)
{
    printf("Please Enter a String:");
    gets(str);
    printf("Please Enter to need to search's String:");
    gets(substr);
    //fgets(char * s, int size, FILE * stdin);
}

int strlen(char *str)
{
    int i = 0;
    while(str[i] != '\0')
        i++;
    return i;
}

char* serch_str(char *str, char *serch_str)
{
    int i, j, k;

    k = strlen(str) - strlen(serch_str);

    if (k > 0 && NULL != str && NULL != serch_str)
    {
        for(i=0;i<k;i++)
            for(j=i;str[j] == serch_str[j-i]; j++)
                if(serch_str[j-i+1] == '\0')
                    return str+i+strlen(serch_str);
    }
    return NULL;
}

void print(char* ret_str)
{
    if(ret_str != NULL)
        printf("所搜索字符串之后的字符为: %s\n", ret_str);
    else
        printf("没有搜索到所要搜索的字符串...\n");
}

int main(int argc, char *argv[])
{
    char str1[50],str2[50];
    char serch_str1[50],serch_str2[50];
    char* ret_str1,* ret_str2;

    input(str1, serch_str1);

    ret_str1 = serch_str(str1, serch_str1);

    printf("直接调用函数serch_str()\n");
    print(ret_str1);

    input(str2,serch_str2);

    fun = serch_str;
    ret_str2 = fun(str2, serch_str2);

    printf("使用函数指针fun调用函数serch_str()\n");
    print(ret_str2);

    return 0;
}
