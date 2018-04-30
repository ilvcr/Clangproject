/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Sun 29 Apr 2018 01:58:21 PM CST
 @File Name: use_of_array_in_function.cpp
 @Description:  如果在一个函数中生成了一个数组, 然后将这个数组在函数中使用
************************************************************************/

#include<stdio.h>
#include<stdlib.h>

#define   N   8

int* creat()
{
    int i;
    printf("creat()函数中产生数组元素\n");
    static int arr[N];//将数组定义为静态数组, 可防止arr的生存周期随着函数调用的结束而结束
                      /*静态数组的生存周期是从程序开始到程序运行结束而结束的, 而不像普通
                      数组那样随着函数调用的结束而结束其生命周期, 所以数组不会随着函数调用的结束而被释放掉*/

    for(i=0;i<N;i++)
    {
        arr[i]=rand() % 100;
        printf("%d\t", arr[i]);
    }

    return arr;
}

int print(int arr[], int n)
{
    int i;

    for(i=0;i<n;i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");

    return 0;
}

int main(int argc, char * argv[])
{
    int i;
    int *p;
    p = creat();//如若不加static,数组arr的生存周期会随着函数调用的结束而结束
    printf("\n通过函数调用返回后得到的数组\n");
    print(p, N);

    return 0;
}
