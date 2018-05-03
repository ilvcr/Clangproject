/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Wed 02 May 2018 03:48:00 PM CST
 @File Name: relation_between_pointers_and_pointers_11.cpp
 @Description:  通过指针来引用二维数组
************************************************************************/

#include<stdio.h>

#define N 5
int main(int argc, char * argv[])
{
    int a[N][N];
    int i, j;
    int *pa;
    printf("直接引用二维数组a中的元素\n\n");
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            a[i][j] = i*5+j+1;
            printf("a[%d][%d] = %d\t", i, j, a[i][j]);
        }
        printf("\n");
    }
    
    printf("\n\n-----------------------------------------------\n\n");

    pa = a[0];
    printf("通过指针引用二维数组a中的元素\n\n");
    for(i=0,j=0;pa<=&a[4][4];pa++)
    {
        printf("a[%d][%d] = %d\t", i, j, *pa);
        j++;
        if(5==j)
        {
            j=0;
            i++;
            printf("\n");
        }
    }

    printf("\n");

    return 0;
}
