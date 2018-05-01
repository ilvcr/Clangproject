/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Tue 01 May 2018 11:10:44 AM CST
 @File Name: use_of_twodimension_dynamic_arrays.cpp
 @Description:  创建二位动态数组的一般形式为：
                类型说明符** 数组名=(类型说明符**)malloc(第一维长度 *sizeof(类型说明符*));

                    二维动态数组的创建方法
************************************************************************/

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char * argv[])
{
    int n1,n2;
    int **arr,i,j;
    printf("请输入所要创建的动态数组的第一维长度: ");
    scanf("%d",&n1);
    printf("请输入所要创建的动态数组的第二维长度: ");
    scanf("%d",&n2);

    if((arr=(int**)malloc(n1*sizeof(int*)))==NULL)  //第一维的创建
    {
        printf("分配内存空间失败!\n");
        return 0;
    }

    for(i=0;i<n1;i++)
    {
        if((arr[i]=(int*)malloc(n2*sizeof(int)))==NULL) //第二维的创建
        {
            printf("分配内存空间失败!\n");
            return 0;
        }
    }

    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            arr[i][j]=i*n2+j+1;
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<n1;i++)
    {
        free(arr[i]);   //释放第二维
    }
    free(arr);  //释放第一维
    
    return 0;
}


/*
for(i=0;i<第一维长度;i++)
{
    数组名[i]=(类型说明符**)malloc(第二维长度*sizeof(类型说明符*));
}


1->
array=(int**)malloc(n1*sizeof(int*)); //第一维的创建

2->
for(i=0;i<n1;i+++)
{
    arr[i]=(int*)malloc(n2*sizeof(int));  //第二维的创建
}
*/
