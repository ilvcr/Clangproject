/*************************************************************************
> File Name: shortestFullcolor.c
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: Thu Apr  4 19:55:32 2019
> Description: 一串首尾相连的珠子（m个），有N种颜色（N<=10）
                设计一个算法，取出其中一段，要求包含所有的N种颜色，并使长度最短
 ************************************************************************/

#include<stdio.h>

int shortestFullcolor(int* a, int n, int m) {

    int c[m], ctr = m;
    int h = 0;
    int t = 0;
    int min = n;

    while(1) {
        while(ctr > 0 && h < n){
            if(c[a[h]] == 0) ctr--;
            c[a[h]]++;
            h++;
        }

        if(h >= n) return min;

        while(1) {
            c[a[t]]--;
            if(c[a[t]] == 0) break;
            t++;
        }

        if(min > h-t) min = h-t;
        t++;
        ctr++;
    }
}





