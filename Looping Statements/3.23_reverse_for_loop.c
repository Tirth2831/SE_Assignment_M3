/*
3.23 C Program to Reverse a Number Using FOR Loop
*/
#include<stdio.h>
main()
{
	int n, rem ,rev;
	
	printf("\n\n\t Enter a number to check Reverse number : ");
	scanf("%d",&n);
	
	for(;n!=0;n=n/10)
	{
		rem=n%10;
		rev=rev*10+rem;
		
	}
	printf("\n\n\t Reverse Number : %d",rev);
}