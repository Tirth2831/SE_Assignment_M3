/*
2.11 WAP to find number is even or odd using ternary operator.
*/

#include<stdio.h>
main()
{
	int n=0;
	
	printf("\n\n\t Enter a Number To Check : ");
	scanf("%d",&n);
	
	(n % 2 == 0 ) ? printf("\n\n\t Number is even ",n) : printf("\n\n\t Number is odd",n); 
}