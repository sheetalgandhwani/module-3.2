 // WAP to show  Vowel or Consonant using switch case..
#include<stdio.h>
main()
{
	char ch;
	printf("enter alphabet:\n");
	scanf("%ch",&ch);
	switch(ch)
	{  
		  case'a':
		  	case'e':
		  		 case'i':
		  		 	case'o':
		  		 	 	 case'u':
		  		 	 	 	 case'A':
		  		 	 	 	 	 case'E':
		  		 	 	 	 	 	 case'I':
		  		 	 	 	 	 	 	 case'O':
		  		 	 	 	 	 	 	 	 case'U':
		  		 	 	 	 	 	 	 	 	printf("%c is vowel",ch);
		  		 	 	 	 	 	 	 	 	break;
		  		 	 	 	 	 	 	 	 	default:printf(" %c is consonant",ch);  		 	 	 	 	 	 	 	 	
	}
}
