/*Pro_04*/
/*输入某年某月某日,判断这一天是这一年的第几天*/
#include<stdio.h>
int main()
{
	int Year , Month , Day ,A;
	printf("输入年,月,日\n\40\40\40\40");
	scanf("%d,%d,%d", &Year , &Month , &Day );
	if( Month <= 0 && Month >= 12 )
		printf("输入不正确，请重新输入\n");
	if( Year % 4 == 0 || Year % 100 == 0)
	{
			if(Day >= 0 && Day <= 31)
			{
				if(Month == 1)		printf("这一天是这一年的第%d天\n",Day);
				if(Month == 3)		printf("这一天是这一年的第%d天\n",31 + 28 + Day);
				if(Month == 5)		printf("这一天是这一年的第%d天\n",31 + 28 + 31 + 30 + Day);
				if(Month == 7)		printf("这一天是这一年的第%d天\n",31 + 28 + 31 + 30 + 31 + 30 + Day);
				if(Month == 8)		printf("这一天是这一年的第%d天\n",31 + 28 + 31 + 30 + 31 + 30 + 31 + Day);
				if(Month == 10)		printf("这一天是这一年的第%d天\n",31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + Day);
				if(Month == 12)		printf("这一天是这一年的第%d天\n",31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + Day);
			}
			else
				printf("Day输入不正确，请重新输入\n");
			if(Day >= 0 && Day <= 28)
			{
				if(Month == 2)		printf("这一天是这一年的第%d天\n",31 + Day);
			}
			else
				printf("Day输入不正确，请重新输入\n");

			if(Day >= 0 && Day <= 30)
			{
				if(Month == 4)		printf("这一天是这一年的第%d天\n",31 + 28 + 31 + Day);
				if(Month == 6)		printf("这一天是这一年的第%d天\n",31 + 28 + 31 + 30 + 31 + Day);
				if(Month == 9)		printf("这一天是这一年的第%d天\n",31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + Day);
				if(Month == 11)		printf("这一天是这一年的第%d天\n",31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + Day);
			}
			else
				printf("Day输入不正确，请重新输入\n");
	}
	else
	{
			if(Day >= 0 && Day <= 31)
			{
				if(Month == 1)		printf("这一天是这一年的第%d天\n",Day);
				if(Month == 3)		printf("这一天是这一年的第%d天\n",31 + 29 + Day);
				if(Month == 5)		printf("这一天是这一年的第%d天\n",31 + 29 + 31 + 30 + Day);
				if(Month == 7)		printf("这一天是这一年的第%d天\n",31 + 29 + 31 + 30 + 31 + 30 + Day);
				if(Month == 8)		printf("这一天是这一年的第%d天\n",31 + 29 + 31 + 30 + 31 + 30 + 31 + Day);
				if(Month == 10)		printf("这一天是这一年的第%d天\n",31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + Day);
				if(Month == 12)		printf("这一天是这一年的第%d天\n",31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + Day);
			}
			else
				printf("Day输入不正确，请重新输入\n");
			if(Day >= 0 && Day <= 29)
			{
				if(Month == 2)		printf("这一天是这一年的第%d天\n",31 + Day);
			}
			else
				printf("Day输入不正确，请重新输入\n");

			if(Day >= 0 && Day <= 30)
			{
				if(Month == 4)		printf("这一天是这一年的第%d天\n",31 + 29 + 31 + Day);
				if(Month == 6)		printf("这一天是这一年的第%d天\n",31 + 29 + 31 + 30 + 31 + Day);
				if(Month == 9)		printf("这一天是这一年的第%d天\n",31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + Day);
				if(Month == 11)		printf("这一天是这一年的第%d天\n",31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + Day);
			}
			else
				printf("Day输入不正确，请重新输入\n");
	}
	return 0;
}

/*
From Baidu

#include <stdio.h>
#include <vcl.h>
#pragma hdrstop		//#pragma hdrstop 是一条语句,在这之前只能是#include 它的作用是让编译器在不需要的情况下不重新编译前面的.h文件,BCB就是用它实现头文件缓冲的,不过,在一个工程里这条语句前面的.h文件必需一样,否则BCB会全部编译所有.h文件!  
#pragma argsused	//#pragma argsused VC是不支持的，只有Borland的BC和BCB才支持，表示函数的参数如果没有用到，就不发出警告。如果不写，上面代码中 WinMain的hPrevInstance没有用到，编译器就会报该参数没有用到的警告信息。
int main(int argc, char* argv[])
{
	int day,month,year,sum,leap;
	printf("\n请输入年,月,日[用逗号隔开]\n");
	scanf("%d,%d,%d",&year,&month,&day);
	switch(month)		//先计算某月以前月份的总天数
	{
		case 1:sum = 0;break;
		case 2:sum = 31;break;
		case 3:sum = 59;break;
		case 4:sum = 90;break;
		case 5:sum = 120;break;
		case 6:sum = 151;break;
		case 7:sum = 181;break;
		case 8:sum = 212;break;
		case 9:sum = 243;break;
		case 10:sum = 273;break;
		case 11:sum = 304;break;
		case 12:sum = 334;break;
		default:printf("data error");break;
	}
	sum = sum + day;		//再加上某天的天数
	if(year % 400 ==0 || (year % 4 == 0 && year % 100 != 0))		//判断是不是闰年
		leap = 1;
	else
		leap = 0;
	if(leap == 1&& month >2)		//如果是闰年且月份大于2,总天数应该加一天
		sum++;
	printf("这天是一年的第%d天！",sum);
	getchar();
	return 0;
}
*/
