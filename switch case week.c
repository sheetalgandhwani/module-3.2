     //WAP to show  Monday to Sunday using switch case.
#include<stdio.h>
main()
{
	char week;
	printf("enter your week:\n");
	scanf("%d",&week);
	switch(week)
	{
		case 1 : printf("Monday");
		         break;
		
		case 2 : printf("Tuesday");
		         break;
		
		case 3 : printf("Wednesday");
	             break;
		
		case 4 : printf("Thursday");
		         break;
		         
	  case 5 : printf("Friday");
	             break;
	             
	  case 6 : printf("Saturday");
		         break; 
		         
		case 7 : printf("Sunday");
		         break; 
    
		default: printf("invalid choice");		         
  }
	
}
