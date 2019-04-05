/*************************************************************************
> File Name: findDecreasing.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: Fri Apr  5 12:31:20 2019
> Description: 求一个数组的最长递减子序列
 ************************************************************************/

#include<iostream>
#include<Array>
#include<stdio.h>
using namespace std;

int* findDecreasing(int* a) {

    int* ds = new int[a.length];
    Array,fill(da, 0);
    int dsl = 0;
    int lastdsl = 0;

    for(int i=0; i<a.length; i++) {

        int s = 0;
        int t = dsl - 1;
        while(s <= t) {
            
            int m = s + (t-s)/2;
            if(ds[m] < a[i]) {
                t = m - 1;
            }else {
                s = m + 1;
            }
        }

        ds[s] = a[i];
        if(s > ds) {
            dsl = s;
            lastdsl = i;
        }
    }
    
    for(int i=lastdsl-1, j=dsl-1; i>0 && j>=00; i--) {

        if(a[i] == ds[j]) {
            j--;
        }else if(a[i] < dsl[j]) {
            ds[j--] = a[i];
        }
    }

    return Array.copyOfRange(ds, 0, dsl+1);
}





