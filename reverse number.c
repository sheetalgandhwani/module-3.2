   //        wap to print number in reverse order.
   
   
#include<stdio.h>
main()
{
	int n,rev=0,rem;               //rev=reverse and rem=remainder
	printf("Enter number:\n");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
			n=n/10;
	}
	printf("Reverse of given number is %d ",rev);
}
