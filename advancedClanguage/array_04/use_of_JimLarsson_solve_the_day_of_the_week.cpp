/*************************************************************************
 @Author: Yoghourt.Lee->lvcr
 @Created Time : Sun 29 Apr 2018 01:19:02 PM CST
 @File Name: use_of_JimLarsson_solve_the_day_of_the_week.cpp
 @Description:  通过吉姆拉尔森公式求解输入的某天是星期几
************************************************************************/

#include<stdio.h>

int main(int argc, char * argv[])
{
    char weekname[][10]={
                        "Monday",
                        "Tuseday",
                        "Wednesday",
                        "Thursday",
                        "Friday",
                        "Saturday",
                        "SYnday",
    };
    int year;
    int month;
    int day;

    printf("Please enter a year:");
    scanf("%d", &year);

    printf("Please enter a month:");
    scanf("%d", &month);

    printf("Please enter a day:");
    scanf("%d", &day);

    if((1==month) || (2==month))
    {
        month += 12;
        year--;
    }

    int index;
    index = (day+2*month+3*(month+1)/5+year+year/4-year/100+year/400) % 7;
    printf("%d/%d/%d 这一天是 %s\n", year, month, day, weekname[index]);

    return 0;
}
