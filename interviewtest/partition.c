/*************************************************************************
> File Name: partition.c
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: Fri Apr  5 13:22:03 2019
> Description: 调整数组顺序使奇数位于偶数前面
 ************************************************************************/

#include<stdio.h>

void partition(int* a, int n) {

    int i = j =0;
    while(i<n && (a[i]&1)==0) i++;

    if(i==n) return;
    swap(a, i++, j++);

    while(i<n) {
        if((a[i]&1) == 1) {
            swap(a, i, j++);
        }
        i++;
    }
}




