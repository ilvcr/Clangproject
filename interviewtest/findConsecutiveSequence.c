/*************************************************************************
> File Name: findConsecutiveSequence.c
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: Fri Apr  5 13:01:56 2019
> Description: 输入n连续正数序列
                输入一个正数n，输入所有和为n连续正数序列
 ************************************************************************/

#include<stdio.h>

int findConsecutiveSequence(int n) {

    int count = 0;
    for(int i=1; i<n/2; i++) {

        int sqroot = calcSqrt(4*i*i+8*n-4*i+1);
        if(sqroot == -1) continue;
        if((sqroot & 1) == 1) {
            printf("%d - %d", i, ((sqroot-1)/2));
            count++;
        }
    }
    return count;
}





