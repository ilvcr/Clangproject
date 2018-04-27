/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Fri 27 Apr 2018 01:55:57 PM CST
 @File Name: goto_create_dynamic_array.cpp
 @Description:  创建一个动态数组， 数组元素的个数由 n 来确定， 对数组中的每个元素赋初值， 
                    然后输入一个数 n1， 打印出数组中前 n1 个元素。
************************************************************************/

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char * argv[])
{
    int n, n1, i;

    printf("请输入所要分配的大小 :");
    scanf("%d", &n);
    int* arr = (int *)malloc(sizeof(int) * n);
    int* p;
    for(i=0;i<n;i++)
    {
        arr[i] = i+1;
    }

    printf("请输入所要打印的数字元素个数 :");
    scanf("%d", &n1);

    if(n1>n)
        goto exit;

    p = arr;
    for(i=0;i<n1;i++)
        printf("p[%d]=%d\t",i , p[i]);

    printf("\n");

    int a;

exit:
    free(p);
    return 0;
}
