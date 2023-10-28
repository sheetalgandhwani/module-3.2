#include<stdio.h>
int main()
{
	int i,j;
	  
   char c='A' ;
 
	for(i='A';i<='E';i++)
	{
		for(j='A';j<=i;j++)
		{
			printf("%c\t",j);
			
		}
		printf("\n");
		
	}
}
