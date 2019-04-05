/*************************************************************************
> File Name: shiftedBInarySearch.c
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: Fri Apr  5 12:53:16 2019
> Description: 一个数组是由一个递减数列左移若干位形成的，比如{4, 3, 2, 1, 6, 5}
               是由{6， 5， 4， 3 ，2 ，1}左移两位形成的，在这种数组中查找某一个数
 ************************************************************************/

#include<stdio.h>

int shiftedBInarySearch(int* a, int k) {
    
    return helper(a, k, 0, n-1);
}

int helper(int* a, int k, int s, int t) {

    if(s > t) return -1;
    int m = s + (t-s)/2;
    if(a[m] == k) return m;
    else if(a[s] >= k && k > a[m]) return helper(a, k, s, m-1);
    else return helper(a, k, m+1, e);
}


