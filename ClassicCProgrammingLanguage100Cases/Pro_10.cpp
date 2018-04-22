/*Pro_10*/
/*打印楼梯,同时在楼梯上方打印两个笑脸*/
#include<stdio.h>
int main()
{
	printf("\1\1\n");
	for(int i = 1;i < 11;i++)
	{
		for(int j = 1;j <= i;j++)
		{
			printf("%c%c\n",219,219);//乱码冲突，有问题 
		}
		printf("\n");
	}
	return 0;
}
