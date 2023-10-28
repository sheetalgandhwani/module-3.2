            // wap to print factorial of given number
#include<stdio.h>
main()
{
	int fact=1,i,n;
	printf("Enter any number: \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	
	 fact=fact*i;
	 
	}
	printf("The factorial of given number is:%d",fact);
}
