/*
2.1 Write a C program to accept two integers and check whether they are equal or not.
*/

#include<stdio.h>
main()
{
	int a, b;
	printf("\n\n\t Enter number a : ");
	scanf("%d",&a);
	printf("\n\n\t Enter Number b : ");
	scanf("%d",&b);
	
	if(a==b)
		printf("\n\n\t Number is Equal ");
	
	else
	   printf("\n\n\t Number is Not Equal");
}