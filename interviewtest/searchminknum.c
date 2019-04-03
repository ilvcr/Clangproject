/*************************************************************************
> File Name: searchminknum.c
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: Wed Apr  3 18:00:22 2019
> Description: 查找最小的k个元素
                输入n个整数，输出其中最小的k个
 ************************************************************************/

#include<stdio.h>

void siftup(int* a, int i, int n) {

    while(i > 0) {

        int j = (i&1 == 0 ? i-1 : i+1);
        int p = (i-1) >> 1;
        if(j < n && a[j] < a[i]) i = j;
        if(a[i] < a[p]) swap(a, i, p);
        i = p;
    }
}

void siftdown(int* a, int i, int n) {

    while(2*i+1 < n) {

        int l = 2 * i + 1;
        if(l+1 < n && a[l+1] < a[l]) l++;
        if(a[l] < a[i]) swap(a, i, l);
        i = l;
    }
}


