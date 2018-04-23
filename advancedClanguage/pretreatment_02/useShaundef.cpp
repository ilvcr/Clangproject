/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Mon 23 Apr 2018 04:56:37 PM CST
 @File Name: useShaundef.cpp
 @Description:  #undef来设定宏名的作用域, #undef的使用方法

                    在编程时可以用 #undef 来设定定义的宏的作用域
************************************************************************/

#include<stdio.h>

#define N 9

int main()
{
    int i, a[N];

    for(i=0; i<N; i++)
    {
        a[i] = i;
        printf("a[%d]=%d\t", i, a[i]);
        if((i+1) % 3 == 0)
            printf("\n");
    }

    //#undef N

    printf("%d\n", N);

    return 0;
}

/*
通过 #undef 可以设定宏名的作用域， 当在以上代码中注释掉“#undef N”时， 
接下来的打印语句能够正常打印出 N 的值 ； 而没有注释掉“#undef N”时， 
由于此时 N 的作用域结束， 所以接下来在打印语句部分就会出现
“error C2065: 'N' : undeclared identifier”错误，提示 N 没有定义。 
*/
