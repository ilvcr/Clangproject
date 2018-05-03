/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Wed 02 May 2018 02:56:04 PM CST
 @File Name: general_usage_of_pointers_06.cpp
 @Description:  动态数组分配
************************************************************************/

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char * argv[])
{
    int *pa = (int *)malloc(sizeof(int)*9);
    int i;

    for(i=0;i<9;i++)
    {
        *(pa+i) = rand() % 100;
        printf("*(pa + %d) = %d\t", i, *(pa+i));
        if(0 == (i+1)%3)
            printf("\n");
    }
    free(pa);

    printf("********************************\n\n");

    int a = 12;
    if(pa != NULL)
    {
        pa = &a;
        printf("%d\n", *pa);
    }

    return 0;
}
