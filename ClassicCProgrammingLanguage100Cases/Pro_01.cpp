/*Program_01*/
/*��1,2,3,4�ĸ���,����ɶ��ٸ�������ͬ�����ظ�����λ��,���Ƕ���?*/
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
				//	printf("%5d\n",(100 * i + 10 * j + k));//��һ�ֱ�﷽ʽ,��ѧ��﷨
					printf("%5d%d%d\n",i,j,k);//�ڶ��ֱ�﷽ʽ,����ǿ�б�﷨ 
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
    for(t=0,i=1;i<=4;i++)														//��λ������4��ѡ��
        for(j=1;j<=4;j++)														//ʮλ������3��ѡ��
            if(j!=i)															//����ʮλ���ֵ��ڰ�λ����ʱ����
                for(k=1;k<=4;k++)												//��λ����ֻ��2��ѡ����
                    if(k!=i && k!=j)											//��λ������ʮλ���λ�������ʱ����
                        printf(++t%10 ? "%4d" : "%4d\n",i*100+j*10+k);			//�������λ��
    if(t%10)
        printf("\n");
    return 0;
}
*/ 
