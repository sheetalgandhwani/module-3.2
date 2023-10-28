     //     sum of odd numbers 
     
     
#include<stdio.h>
main()
{
	int i,num,sum=0;
	printf("Enter the maximum limit value:");
	scanf("%d",&num);
	printf("\n Odd no.between 0 and %d  are:\n\n",num);
	for(i=1;i<=num;i=i+2)
	{
	    if(i%2!=0)
	    {
	    	sum=sum+i;
			}
	    
			printf("\t%d ",i);
	}
	printf("\n The sum of all odd no. upto %d are=%d",num,sum);
}
