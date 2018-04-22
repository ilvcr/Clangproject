/*Program_01*/
/*有1,2,3,4四个数,能组成多少个互不相同且无重复的三位数,都是多少?*/
#include<stdio.h> 
int main()
{
	int num;
	printf("num:\n");
	for(int i = 1;i <= 4;i++)
	{
		for(int j = 1;j <= 4;j++)
		{
			for(int k = 1;k <= 4;k++)
			{
				if(i != j && j != k && k != i)
				//	printf("%5d\n",(100 * i + 10 * j + k));//第一种表达方式,数学表达法
					printf("%5d%d%d\n",i,j,k);//第二种表达方式,机器强行表达法 
			}	
		}
	}
 	printf("A total of %d no repeat number 3 digits\n",4*3*2);
	return 0;
}


//From Baidu 
/*
#include "stdio.h"
int main(int argc,char *argv[]){
    int i,j,k,t;
    printf("A total of %d no repeat number 3-digits, they are as follows:\n",4*3*2);
    for(t=0,i=1;i<=4;i++)														//百位数字有4种选择
        for(j=1;j<=4;j++)														//十位数字有3种选择
            if(j!=i)															//遇到十位数字等于百位数字时跳过
                for(k=1;k<=4;k++)												//个位数字只有2种选择了
                    if(k!=i && k!=j)											//个位数字与十位或百位数字相等时跳过
                        printf(++t%10 ? "%4d" : "%4d\n",i*100+j*10+k);			//输出该三位数
    if(t%10)
        printf("\n");
    return 0;
}
*/ 
