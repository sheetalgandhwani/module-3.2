//wap to take 10 no.input from user and find out...
// 1. how many even numbers are there?
// 2. how many odd numbers are there?
#include<stdio.h>
main()
{
	int arr[10],even=0,odd=0,i;
	printf("enter any 10 numbers:");
	for(i=0;i<10;i++)
	   scanf("%d",&arr[i]);
	   for(i=0;i<10;i++)
	   {
	   	if(arr[i]%2==0)
	   	even++;
	   	else
	   	odd++;
	   }
	   printf("\n total even numbers are=%d",even);
	  printf("\n total odd numbers are=%d",odd);
}
