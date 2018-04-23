/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Sun 22 Apr 2018 09:21:39 PM CST
 @File Name: fahr2celsius_pro002.cpp
 @Description:  输入相应的模式代码，实现功能：
                        输入华氏温度，打印出相应的摄氏温度
                        输入摄氏温度，打印出相应的华氏温度
************************************************************************/

#include<stdio.h>

/*
输入相应的模式代码，实现功能：
        输入华氏温度，打印出相应的摄氏温度
        输入摄氏温度，打印出相应的华氏温度
*/

float fahr2celsius()
{
    static float fahr;
    static float celsius;
    printf("Please enter a fahr:");
    scanf("%f", &fahr);
    celsius = 5 * (fahr - 32) / 9.0;
    printf("fahe to celsius, celsius is %f°C.\n", celsius);

    return 0;
}

float celsius2fahr()
{
    static float celsius;
    static float fahr;
    printf("Please enter a celsius:");
    scanf("%f",&celsius);
    fahr = (celsius * 9 + 32) / 5.0;
    printf("celsius to fahr, fahe is %f°F.\n", fahr);

    return 0;
}

int main()
{
    int a = 0;

    printf("If you chose celsius to fahr,Please enter 1.\nAnd fahr to celsius,Please enter 2.\n");
    printf("Please Enter:");
    int b = scanf("%d", &a);
    if (1 == b)
        celsius2fahr();
    else if (2 == b)
        fahr2celsius();

    return 0;
}
