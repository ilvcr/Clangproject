/*************************************************************************
> File Name: maxandtestarrayshare.c
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: Fri Apr  5 12:13:48 2019
> Description: 一个整数数组，长度为n，将其分为m份，使各份的和相等，求m的最大值
 ************************************************************************/

#include<stdio.h>

int maxShares(int* a, int n) {

    int sum = 0;
    int i = 0;
    int m = 0;

    for(; i<n; i++) sum += a[i];
    for(m=n; m>=2; m--) {

        if(sum%m != 0) continue;
        int aux[n];
        for(; i<n; i++) aux[i] = 0;
        if(testShares(a, n, m, sum, sum/m, aux, sum/m, 1)) return m;
    }
    return 1;
}

int testShares(int* a, 
               int n, 
               int m, 
               int sum, 
               int groupsum, 
               int* aux, 
               int goal, 
               int groupld) {

    if(goal == 0) {
        
        groupld++;
        if(groupld == m+1) return 1;
    }

    for(int i= 0; i<n; i++) {
        if(aux[i] != 0) continue;
        aux[i] = groupld;
        if(testShares(a, n, m, sum, groupsum, aux, goal-a[i], groupld)) return 1;
    }

    aux[i] = 0;
}






