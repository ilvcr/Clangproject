/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Sun 13 May 2018 01:18:50 AM CST
 @File Name: use_of_assert_in_pro_03.cpp
 @Description:  自定义断言实现代码
************************************************************************/

#include<stdio.h>
#include<stdlib.h>

//#define NDEBUG

#ifndef NDEBUG
#define assert(p) if(!(p))\
    {\
    fprintf(stderr, "Assertion failed: %s, file %s, line %d\n", #p, __FILE__, __LINE__);\
    abort();\
    }

#else
#define assert(p) (void)(0)
#endif
/*
以上采用fprintf函数实现打印输出, 其中输出设备是stderr, 同时在参数中使用宏__FILE__和
__LINE__, 用于输出当前出错的文件名及行号
*/


int sum(int a[], int n)
{
    assert(n > 0);
    int i;
    int sum = 0;
    for(i=0;i<n;i++)
    {
        sum += a[i];
    }

    return sum;
}

int main(int argc, char **argv)
{
    int i = 0;
    int total;
    int arr[] = {2, 3, 4, 7};
    total = sum(arr, 4);
    printf("数组中的元素之和为: %d\n", total);
    total = sum(arr, 0);

    return 0;
}
