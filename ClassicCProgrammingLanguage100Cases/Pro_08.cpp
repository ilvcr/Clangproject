/*Pro_08*/
/*Êä³ö9*9³Ë·¨¿Ú¾÷*/
#include<stdio.h>
int main()
{	
	int Num = 0;
	for( int i = 1; i < 10; i++)
		{
			for( int j = 1; j < 10; j++)
				{
					Num = i * j;
					if( i >= j)
					{
						printf("%d * %d = %d\t",i ,j ,Num );
					}
					else
						printf("\n");
				}
			printf("\n");
		}
	return 0;
}

/*
	From Baidu
#include<stdio.h>

int main(void)

{

   int i,j;

   for(i=1;i<10;i++)

   {

  		printf("1*%d=%d",i,i);

  		for(j=2;j<=i;j++)

  			printf("\t%d*%d=%d",j,i,i*j);

  			printf("\n");

	}

	getch();

	return 0;

}
*/

