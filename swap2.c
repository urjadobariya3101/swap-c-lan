#include<stdio.h>
main()
{
	
	int a,b;
	
	printf("enter the value of a and b.:");
	scanf("%d %d",&a,&b);
	
	printf("Before swap data a = %d b = %d\n\n",a,b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("After swap data - a=%d b=%d",a,b);
	
}
