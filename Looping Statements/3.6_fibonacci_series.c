/*
3.6  WAP to print Fibonacci series up to given numbers
*/

#include<stdio.h>
main()
{
	int a=0, b=1, c, i, n;
	
	printf("\n\n\t Enter a Number to print their Fibonacci series : ");
	scanf("%d",&n);
	
	printf("\n\n\t %d %d ",a,b);
	
	i=1;
	while(i<=n)
	{
		c=a+b;
		printf(" %d ",c);
		a=b;
		b=c;
		i++;
	}
}
