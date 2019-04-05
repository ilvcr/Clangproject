/*************************************************************************
> File Name: sortfullstring.c
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: Fri Apr  5 13:09:28 2019
> Description: 输入一个字符串，打印出该字符串中所有字符的所有排序
 ************************************************************************/

#include<stdio.h>
#define aswap(ARR, X, Y) {int t=ARR[X]; ARR[X]=ARR[Y]; ARR[Y]=t;}

void generatePermutation(char* s, int n) {

    if(n>20) error("are you crazy?");
    byte d[n];
    int pos[n], dpos[n];
    qsort(s);
    memset(d, -1, sizeof(byte)*n);
    
    for(int i=0; i<n; i++) pos[i]=i, dpos[i]=i;

    int r;
    while(r = findFirstAvailable(s, d, pos, n)) {

        if(r == -1) return;
        swap(s, pos, dpos, d, r, r+d[r]);
        for(int i=n-1; i>dpos[r]; i--) d[i] = -d[i];
    }
}

int findFirstAvailable(char* s, byte* d, int* pos, int n) {

    for(int i=n-1; i>1; i--) {

        if(s[pos[i]]>s[pos[i]+d[pos[i]]]) return pos[i];
    }
    return -1;
}

void swap(char* s, int* pos, int* dpos, byte* d, int r, int s) {

    aswap(s, r, s);
    aswap(d, r, s);
    aswap(pos, dpos[r], dpos[s]);
    aswap(dpos, r, s);
}






