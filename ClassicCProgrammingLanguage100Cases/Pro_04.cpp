/*Pro_04*/
/*����ĳ��ĳ��ĳ��,�ж���һ������һ��ĵڼ���*/
#include<stdio.h>
int main()
{
	int Year , Month , Day ,A;
	printf("������,��,��\n\40\40\40\40");
	scanf("%d,%d,%d", &Year , &Month , &Day );
	if( Month <= 0 && Month >= 12 )
		printf("���벻��ȷ������������\n");
	if( Year % 4 == 0 || Year % 100 == 0)
	{
			if(Day >= 0 && Day <= 31)
			{
				if(Month == 1)		printf("��һ������һ��ĵ�%d��\n",Day);
				if(Month == 3)		printf("��һ������һ��ĵ�%d��\n",31 + 28 + Day);
				if(Month == 5)		printf("��һ������һ��ĵ�%d��\n",31 + 28 + 31 + 30 + Day);
				if(Month == 7)		printf("��һ������һ��ĵ�%d��\n",31 + 28 + 31 + 30 + 31 + 30 + Day);
				if(Month == 8)		printf("��һ������һ��ĵ�%d��\n",31 + 28 + 31 + 30 + 31 + 30 + 31 + Day);
				if(Month == 10)		printf("��һ������һ��ĵ�%d��\n",31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + Day);
				if(Month == 12)		printf("��һ������һ��ĵ�%d��\n",31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + Day);
			}
			else
				printf("Day���벻��ȷ������������\n");
			if(Day >= 0 && Day <= 28)
			{
				if(Month == 2)		printf("��һ������һ��ĵ�%d��\n",31 + Day);
			}
			else
				printf("Day���벻��ȷ������������\n");

			if(Day >= 0 && Day <= 30)
			{
				if(Month == 4)		printf("��һ������һ��ĵ�%d��\n",31 + 28 + 31 + Day);
				if(Month == 6)		printf("��һ������һ��ĵ�%d��\n",31 + 28 + 31 + 30 + 31 + Day);
				if(Month == 9)		printf("��һ������һ��ĵ�%d��\n",31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + Day);
				if(Month == 11)		printf("��һ������һ��ĵ�%d��\n",31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + Day);
			}
			else
				printf("Day���벻��ȷ������������\n");
	}
	else
	{
			if(Day >= 0 && Day <= 31)
			{
				if(Month == 1)		printf("��һ������һ��ĵ�%d��\n",Day);
				if(Month == 3)		printf("��һ������һ��ĵ�%d��\n",31 + 29 + Day);
				if(Month == 5)		printf("��һ������һ��ĵ�%d��\n",31 + 29 + 31 + 30 + Day);
				if(Month == 7)		printf("��һ������һ��ĵ�%d��\n",31 + 29 + 31 + 30 + 31 + 30 + Day);
				if(Month == 8)		printf("��һ������һ��ĵ�%d��\n",31 + 29 + 31 + 30 + 31 + 30 + 31 + Day);
				if(Month == 10)		printf("��һ������һ��ĵ�%d��\n",31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + Day);
				if(Month == 12)		printf("��һ������һ��ĵ�%d��\n",31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + Day);
			}
			else
				printf("Day���벻��ȷ������������\n");
			if(Day >= 0 && Day <= 29)
			{
				if(Month == 2)		printf("��һ������һ��ĵ�%d��\n",31 + Day);
			}
			else
				printf("Day���벻��ȷ������������\n");

			if(Day >= 0 && Day <= 30)
			{
				if(Month == 4)		printf("��һ������һ��ĵ�%d��\n",31 + 29 + 31 + Day);
				if(Month == 6)		printf("��һ������һ��ĵ�%d��\n",31 + 29 + 31 + 30 + 31 + Day);
				if(Month == 9)		printf("��һ������һ��ĵ�%d��\n",31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + Day);
				if(Month == 11)		printf("��һ������һ��ĵ�%d��\n",31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + Day);
			}
			else
				printf("Day���벻��ȷ������������\n");
	}
	return 0;
}

/*
From Baidu

#include <stdio.h>
#include <vcl.h>
#pragma hdrstop		//#pragma hdrstop ��һ�����,����֮ǰֻ����#include �����������ñ������ڲ���Ҫ������²����±���ǰ���.h�ļ�,BCB��������ʵ��ͷ�ļ������,����,��һ���������������ǰ���.h�ļ�����һ��,����BCB��ȫ����������.h�ļ�!  
#pragma argsused	//#pragma argsused VC�ǲ�֧�ֵģ�ֻ��Borland��BC��BCB��֧�֣���ʾ�����Ĳ������û���õ����Ͳ��������档�����д����������� WinMain��hPrevInstanceû���õ����������ͻᱨ�ò���û���õ��ľ�����Ϣ��
int main(int argc, char* argv[])
{
	int day,month,year,sum,leap;
	printf("\n��������,��,��[�ö��Ÿ���]\n");
	scanf("%d,%d,%d",&year,&month,&day);
	switch(month)		//�ȼ���ĳ����ǰ�·ݵ�������
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
	sum = sum + day;		//�ټ���ĳ�������
	if(year % 400 ==0 || (year % 4 == 0 && year % 100 != 0))		//�ж��ǲ�������
		leap = 1;
	else
		leap = 0;
	if(leap == 1&& month >2)		//������������·ݴ���2,������Ӧ�ü�һ��
		sum++;
	printf("������һ��ĵ�%d�죡",sum);
	getchar();
	return 0;
}
*/
