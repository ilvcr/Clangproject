/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Wed 25 Apr 2018 11:53:31 PM CST
 @File Name: selectiveelsebase.cpp
 @Description:  按照先后顺序输入 A、 B、 C 三个数， 
                        如果 A<B<C， 那么打印输出“输入数据呈现递增规律”的信息， 
                        否则打印输出“输入数据呈现非递增规律”的信息，
************************************************************************/


#include<stdio.h>

int main()
{
    int A, B, C;

    printf("请依次输入 A、 B、 C 的值 :");
    scanf("%d%d%d",&A, &B, &C);

    if(A<B)
        if(B<C)
            printf("输入数据呈现递增规律 \n");
        else
            printf("输入数据呈现非递增规律 \n");
    else
        printf("输入数据呈现非递增规律 \n");


    return 0;
}
