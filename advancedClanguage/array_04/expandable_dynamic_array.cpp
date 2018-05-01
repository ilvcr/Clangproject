/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Tue 01 May 2018 12:01:22 PM CST
 @File Name: expandable_dynamic_array.cpp
 @Description:  可扩展动态数组
                    一维动态数组的扩展
************************************************************************/

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char * argv[])
{
    int *n, *p;
    int i, n1, n2;

    printf("请输入所要创建的动态数组的长度: ");
    scanf("%s", &n1);

    if((n=(int*)malloc(n1*sizeof(int)))==NULL)
    {
        printf("分配空间失败!\n");
        return 0;
    }

    for(i=0;i<n1;i++)
    {
        n[i]=n1-i;
        printf("%d\t",n[i]);
        if(0==(i+1)%4)
            printf("\n");
    }

    printf("\n请输入所要扩展的动态数组的长度: ");
    scanf("%d",&n2);

    if((p=(int*)realloc(n, (n2)*sizeof(int)))==NULL)  //动态扩充数组
    {
        printf("分配空间失败!\n");
        return 0;
    }

    for(i=0;i<n2;i++)
    {
        p[i]=n2-1;
        printf("%d",p[i]);
        if(0==(i+1)%4)
            printf("\n");
    }

    free(p);
    
    return 0;
}
