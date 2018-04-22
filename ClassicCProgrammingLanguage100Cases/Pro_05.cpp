/*Pro_05*/
/*输入三个整数x,y,z,请把这三个数由小到大输出*/
#include<stdio.h>
/*源代码,运行不通过
int MaxMin(int a,int b);
int main()
{	
	int i , j , k ;
	printf("请输入:");
	printf("i = ");
	scanf("%d",&i);
	printf("       j = ");
	scanf("%d",&j);
	printf("       k = ");
	scanf("%d",&k);
	MaxMin(i,j);
	MaxMin(i,k);
	MaxMin(j,k);
	printf("%d < %d < %d\n",i,j,k);
	return 0;
}
int MaxMin(int a,int b)
{	
	int t;
	if( a > b )
	{
		t = a;
		a = b;
		b = t;
	}
	return a;
}*/
int main()
{
	int x , y , z , t ;
	scanf("%d%d%d",&x,&y,&z) ;
	if (x > y)
	{t = x ; x = y ; y = t ;} /*交换x,y的值*/
	if(x > z)
	{t = z ; z = x ; x = t ;}/*交换x,z的值*/
	if(y > z)
	{t = y ; y = z ; z = t ;}/*交换z,y的值*/
	printf("small to big: %d %d %d\n",x,y,z);
}
