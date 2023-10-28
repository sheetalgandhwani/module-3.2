   // wap to swap two variables without using third variable...
#include<stdio.h>
main()
{ 
  int a=20,b=30;
  
  printf(" Before swapping value of a is %d and b is %d\n",a,b);
  
  a=a+b;
  b=a-b;
  a=a-b;
  
  printf("After swapping value of a is %d and b is %d",a,b);
}
