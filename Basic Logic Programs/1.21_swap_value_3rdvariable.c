/*
1.21 Accept 2 numbers from user and swap 2 numbers with using 3rd variable
and without using 3rd variable
*/

#include<stdio.h>
main()
{
	int a,b,c;
	printf("\n\n\t a : ");
	scanf("%d",&a);
	printf("\n\n\t b : ");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	
	printf("\n\n\t a=%d",a);
	printf("\n\n\t b=%d",c);
	
}
