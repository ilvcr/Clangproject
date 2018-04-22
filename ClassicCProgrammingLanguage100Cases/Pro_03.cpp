/*Pro_03*/
/*一个整数,它加上100后是一个完全平方数,再加上168又是一个完全平方数,请问该数是多少?*/
/*
	完全平方数		From	Baidu
	定义:完全平方即用一个整数乘以自己例如1*1，2*2，3*3等，依此类推。
		若一个数能表示成某个整数的平方的形式，则称这个数为完全平方数。
			完全平方数是非负数，而一个完全平方数的项有两个。
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
						printf("完全平方数%d\n",i);
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

