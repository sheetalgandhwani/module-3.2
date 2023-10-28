      // write a program you have to make a summation of first and last digit
#include<stdio.h>
 main()
{
	int num=0,first=0,last=0,sum=0;
	printf("enter the number:");
	scanf("%d",&num);
	last=num%10;
	while(num>10)
	{
		num=num/10;
	}
	first=num;
	sum=first+last;
	printf("sum of first and last digit is %d ",sum);
}
