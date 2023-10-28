#include<stdio.h>
main()
{
	int sum=0,n,rem;
	printf("Enter any number:  ");
	scanf("%d",&n);
	while(n>0)
	{
		rem=n%10;
		sum=sum+rem;
		n=n/10;
		}
		printf("Sum of digits of given number is:  %d",sum);
}
