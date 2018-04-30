/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Sun 29 Apr 2018 02:36:15 PM CST
 @File Name: use_dynamic_arrays_to_extend_pixels.cpp
 @Description:  将一幅像素为320X320的灰度图像扩展为480X480
                    扩展方式为: 每隔四行空两行, 每隔两列空两列
************************************************************************/

#include<stdio.h>
#include<stdlib.h>

#define  N  320
#define  M  480

int main(int argc, char *argv[])
{
    int i,j;
    int a[N][N];
    int b[M][M];

    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            a[i][j] = rand() % 256;
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<M;i++)
    {
        for(j=0;j<M;j++)
        {
            if(4==(i%6) || 5==(i%6) || 4==(j%6) || 5==(j%6))
            {
                b[i][j] = 0;
                continue;
            }
            b[i][j] = a[i/6*4+i%6][j/6*4+j%6];
        }
    }

    return 0;}
