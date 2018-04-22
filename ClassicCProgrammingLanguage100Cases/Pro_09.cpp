/*Pro_09*/
/*要求输出国际象棋的棋盘*/
#include<stdio.h>
int main()
{
	for( int i = 1; i <= 8; i++)
	{
		for( int j = 1; j <= 8; j++)
		{
			if( i % 2 == 1 && j % 2 == 1)
			{
				printf("%c",219);
			}
			else if( i % 2 == 0 && j % 2 == 0)
			{
				printf("%c",219);
			}
			else
				printf("%c",032);
		}
		printf("\n");
	}
	return 0;
}

/*
	From Baidu

#include<stdio.h>  
int main()  
{  
    int i,j;  
    for(i=0;i<8;i++)  
    {  
        for(j=0;j<8;j++)  
            if((i+j)%2==0)  
                printf("%c%c",219,219);  
            else printf("  ");  
            printf("\n");  
    }  
    return 0;  
}  

*/
