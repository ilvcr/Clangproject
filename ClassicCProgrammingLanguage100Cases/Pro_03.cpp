/*Pro_03*/
/*һ������,������100����һ����ȫƽ����,�ټ���168����һ����ȫƽ����,���ʸ����Ƕ���?*/
/*
	��ȫƽ����		From	Baidu
	����:��ȫƽ������һ�����������Լ�����1*1��2*2��3*3�ȣ��������ơ�
		��һ�����ܱ�ʾ��ĳ��������ƽ������ʽ����������Ϊ��ȫƽ������
			��ȫƽ�����ǷǸ�������һ����ȫƽ����������������
*/

#include<stdio.h>
#include<math.h>
int main()
{
	int b , c ;
	for( int i = 0 ; i < 10000 ; i++ )
	{
		b = (int) sqrt( i + 100 );
			if( ( i + 100 ) == b * b )
				c = (int) sqrt( i + 100 + 168 );
					if( ( i + 100 +168 ) == c * c )
						printf("��ȫƽ����%d\n",i);
	}
	return 0;
}
/*
From	CSDN
				http://blog.csdn.net/duxinfeng2010/article/details/7746120
#include <stdio.h>  
#include <math.h>  
  
int main(int argc, const char * argv[])  
{  
      
    long i,temp1,temp2;  
    for (i=0; i<100000; i++) {  
        temp1 = sqrtf(i+100);  
        temp2 = sqrtf(i+100+168);  
        if ((temp1*temp1 == i+100) && (temp2*temp2 == i+100+168)) {  
            printf("--------> %ld\n",i);  
        }  
    }  
          
      
    return 0;  
}  
*/

