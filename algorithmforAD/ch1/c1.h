/*************************************************************************
> File Name: c1.h
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月19日 星期四 11时49分20秒
> Description: 
 ************************************************************************/

#ifndef _C1_H
#define _C1_H
#endif

/* c1.h (程序名) */
#include<string.h>
#include<ctype.h>
#include<malloc.h>  /* malloc()等 */
#include<limits.h>  /* INT_MAX等 */
#include<stdio.h>   /* EOF(=^Z或F6),NULL */
#include<stdlib.h>  /* atoi() */
#include<io.h>      /* eof() */
#include<math.h>    /* floor(),ceil(),abs() */
#include<process.h> /* exit() */

 /* 函数结果状态代码 */
#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
/* #define OVERFLOW -2 因为在math.h中已定义OVERFLOW的值为3,故去掉此行 */

typedef int Status;  /* Status是函数的类型,其值是函数结果状态代码，如OK等 */

typedef int Boolean; /* Boolean是布尔类型,其值是TRUE或FALSE */
