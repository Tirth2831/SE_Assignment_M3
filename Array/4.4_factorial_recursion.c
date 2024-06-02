/*
4.4 WAP to find factorial using recursion
*/
#include<stdio.h>

int fact(int n);

main()
{
	int n;
    printf("\n\n\t Enter Number to print factorial : ");
    scanf("%d", &n);
    printf("\n\n\t Factorial num : %d",fact(n));
}

int fact(int n)
{
	if(n==0)
	return 1;
	else
	return n*fact(n-1);
	
}