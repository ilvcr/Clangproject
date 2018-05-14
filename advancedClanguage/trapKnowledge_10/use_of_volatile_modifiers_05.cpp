/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Mon 14 May 2018 12:57:37 PM CST
 @File Name: use_of_volatile_modifiers_05.cpp
 @Description:  volatile与嵌入式编程有关
************************************************************************/

/*
原型: int gettimeofday(struct timeval* tv, struct timezone* tz);
头文件: #include<sys/time.h>
功能: 获取当前时间
返回值: 如果成功获取当前时间返回0，否则返回-1，错误代码存于errno中

gettimeofday()会把目前的时间通过tv所指的结构返回，并将当地时区的信息存放于tz所指向的结构中
*/


#include<stdio.h>
#include<sys/time.h>


/*
//timeval结构定义
struct timevals{
        long tv_sec;    //存放秒
        long tv_usec;   //存放微秒
};

//timezone结构定义，作用是把当地时区的信息存放到tz所指的结构中
struct timezone{
        int tz_minuteswest; //存放的是与格林威治时间的时差
        int tz_dsttime;     //存放的是时间的修正方式
};
*/


int main(int argc, char **argv)
{
    struct timeval start, end;
    gettimeofday(&start, NULL);     /*测试起始时间*/
    double timeuse;
    int j;
    for(j=0;j<1000000;j++)
        ;

    gettimeofday(&end, NULL);       /*测试终止时间*/
    timeuse = 1000000 * (end.tv_sec - start.tv_sec) +end.tv_usec - start.tv_usec;
    timeuse /= 1000000;
    printf("RUN TIME: %f\n", timeuse);

    return 0;
}

