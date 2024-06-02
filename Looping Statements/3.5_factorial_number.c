/*
3.5 WAP to print factorial of given number.
*/

#include<stdio.h>
main()
{
	int n, i, fact=1;
	
	printf("\n\n\t Enter a Number to Print Factorial : ");
	scanf("%d",&n);
	
   for(i=1;i<=n;i++)
	{
		fact=fact*i;
		
	}
	printf("\n\n\t Factorial of Given Number is : %d",fact);
}