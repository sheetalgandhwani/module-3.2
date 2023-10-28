   //write a program to find out the max from given number.
   
   
#include<stdio.h>
main()
{
	int n,rem,max=0;          //rem=remainder
	printf("enter the number\n");
	scanf("%d",&n);
	while(n>0)
	{
	   	rem=n%10;
		  if(rem>max)
		    max=rem;
		    n=n/10;
  }
  printf("Largest digit in given number is:%d",max);
}
