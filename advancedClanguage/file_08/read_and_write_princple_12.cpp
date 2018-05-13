/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Sat 12 May 2018 04:54:01 PM CST
 @File Name: read_and_write_princple_12.cpp
 @Description:  通过fscanf函数对read_and_write_princple_11.cpp的text.txt文件
                    进行读操作, 并且将读取的九九乘法表打印出来
************************************************************************/

#include<stdio.h>

int main(int argc, char **argv)
{
    FILE* fpout;
    fpout = fopen("text.txt", "r");

    if(NULL == fpout)
    {
        printf("OPEN FAILED!!!\n");
        return 0;
    }

    int i, j;
    int a, b, c;
    for(i=1;i<10;i++)
    {
        for(j=1;j<i+1;j++)
        {
            fscanf(fpout,"%d X %d = %d\t", &a, &b, &c);
            printf("%d X %d = %d", a, b, c);
        }
        printf("\n");
    }

    fclose(fpout);

    return 0;
}
