//                sum of even numbers


#include<stdio.h>
main()
{
	int i,num,sum=0;
	printf("Enter the maximum limit value:\n");
	scanf("%d",&num);
	printf("\n Odd no.between 1 and %d  are:\n\n",num);
	for(i=2;i<=num;i=i+2)
	{
		    if(i%2==0)
				{
		    	sum=sum+i;
				}
				printf("\t%d ",i);
	      
			
   }
	printf("\n\nThe sum of all even number upto %d are:%d",num,sum);

}
