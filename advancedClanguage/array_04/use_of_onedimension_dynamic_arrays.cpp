/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Tue 01 May 2018 10:57:14 AM CST
 @File Name: use_of_onedimension_dynamic_arrays.cpp
 @Description:
                创建一维动态数组的一般形式为：
                类型说明符 * 数组名 = {类型说明符 *}malloc(数组长度 * sizeof(类型说明符));

                    一维动态数组的使用方法
************************************************************************/

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char * argv[])
{
    int n,i;
    int *arr;
    printf("请输入所要创建的一维动态数组的长度: ");
    scanf("%d",&n);
    if((arr = (int*)malloc(sizeof(int)*n))==NULL)
    {
        printf("分配内存空间失败!\n");
        return 0;
    }

    for(i=0;i<n;i++)
    {
        arr[i]=i+1;
        printf("%d\t",arr[i]);
        if(0 == (i+1)%4)
            printf("\n");
    }
    free(arr);
    printf("\n");

    return 0;
}

/*
在动态数组的创建过程中，先使用malloc()函数像系统动态申请分配了size(int)*n个字节的内存空间，
然后将申请的内存空间视为一个一维数组进行操作
*/
