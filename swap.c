#include<stdio.h>
main()
{
	
	int a,b,c;
	
	printf("enter the value of a\n");
	scanf("%d",&a);
	
	printf("enter the value of b");
	scanf("%d",&b);
	c = a;
	a = b;	
	b = c;
	
	
	printf("after the swap value a %d",a);
	printf("after the swap value b %d",b);
	
	
}
