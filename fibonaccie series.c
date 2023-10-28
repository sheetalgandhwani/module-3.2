     // wap to print Fibonaccie series up to given numbers.
#include<stdio.h>
main()
{
	int n,a=0,b=1,c,i;
	printf("enter number of term ...\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d\t",a);
		c=a+b;
		a=b;
		b=c;
		
	}
}
