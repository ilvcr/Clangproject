/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Tue 01 May 2018 11:38:45 AM CST
 @File Name: use_of_threedimension_dynamic_arrays.cpp
 @Description:

                创建三维动态数组的一般形式为:
                类型说明符*** 数组名 = (类型说明符***)malloc(第一维长度*sizeof(类型说明符**));


for(i=0;i<第二维长度;i++)
{
    数组名[i]=(类型说明符**)malloc(第二维长度*sizeof(类型说明符*));
    for(j=0;j<第三维长度;j++)
    {
        数组名[i][j]=(类型说明符*)malloc(第三维长度*sizeof(类型说明符));
    }
}
************************************************************************/

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    int n1, n2, n3;
    int ***arr;
    int i, j, k;
    printf("请输入所要创建的动态数组的第一维长度: ");
    scanf("%d", &n1);
    printf("请输入所要创建的动态数组的第一维长度: ");
    scanf("%d", &n2);
    printf("请输入所要创建的动态数组的第一维长度: ");
    scanf("%d", &n3);
    
    if((arr=(int***)malloc(n1*sizeof(int**)))==NULL)  //第一维的创建
    {
        printf("分配内存空间失败!\n");
        return 0;
    }

    for(i=0;i<n1;i++)
    {
        if((arr[i]=(int**)malloc(n2*sizeof(int*)))==NULL)  //第二维的创建
        {
            printf("分配内存空间失败!\n");
            return 0;
        }

        for(j=0;j<n2;j++)
        {
            if((arr[i][j]=(int*)malloc(n3*sizeof(int)))==NULL)  //第三维的创建
            {
                printf("分配内存空间失败!\n");
                return 0;
            }
        }
    }

    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            for(k=0;k<n3;k++)
            {
                arr[i][j][k]=i+j+k+1;
                printf("%d\t", arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            free(arr[i][j]);  //释放第三维
        }
    }

    for(i=0;i<n1;i++)
    {
        free(arr[i]);  //释放第二维
    }

    free(arr);  //释放第一维
    
    return 0;
}
