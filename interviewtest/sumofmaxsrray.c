/*************************************************************************
> File Name: sumofmaxsrray.c
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: Wed Apr  3 17:35:10 2019
> Description: 求子数组的最大值
                输入一个整形数组，数组里有正数也有负数。
                数组中连续的一个或多个整数组成一个子数组，每个子数组都有一个和。
                求所有子数组的和的最大值。要求时间复杂度O(n)
 ************************************************************************/

#include<stdio.h>

int maxSuvarray(int* a, int size) {

    if(size <= 0) {

        error("error array size");
    }

    int sum = 0;
    int max = -(1 << 31);
    int cur = 0;
    while(cur < size) {

        sum += a[cur++];
        if(sum > max) {

            max = sum;
        }else if(sum < 0) {

            sum = 0;
        }
    }
    return max;
}
int main() {

    int array = {1, 3, 5, -20, 111, 345, -2, 4, 6, -9};
    printf("maxsum is %d\n", maxSuvarray(array, sizeof(array)/sizeof(array[0])));
    return 0;
}

