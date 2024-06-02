/*
2.10 WAP to check whether a number is negative, positive or zero.
*/
#include<stdio.h>
main()
{
	int n;
	printf("\n\n\t Enter a Number To check : ");
	scanf("%d",&n);
	
	if(n==0)
    	printf("\n\n\t Number is Zero ");
    else if (n>=1)
        printf("\n\n\t Number is Positive ");
    else
       printf("\n\n\t Number is Nagative ");
} 