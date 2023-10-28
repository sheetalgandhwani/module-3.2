           //WAP to print table up to given numbers...
#include<stdio.h>
main()
{
	int i, num,table;
	printf("enter number to generate the table in c\n");
	scanf("%d",&num);
	printf("\ntable of given number:\n");
	for(i=1;i<=10;i++)
	{
		 table=num*i;
		printf("\n%d*%d=%d",num,i,num*i);
		//printf("\n%d",table);
	}

}
