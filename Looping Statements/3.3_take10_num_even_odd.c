/*
3.3 WAP to take 10 no. Input from user find out below values
a. How many Even numbers are there
b. How many odd numbers are there
c. Sum of even numbers
d. Sum of odd numbers
*/

#include<stdio.h>
main()
{
	int i, sumodd=0, sumeven=0;
	
	printf("\n\n\t ...... 10 Number ........\n\n");
	i=1;
	while(i<=10)
	{
		printf("\t %d",i);
		i++;
	}
	printf("\n\n\t ...... Even Number ........\n\n");
	
	i=2;
	while(i<=10)
	{
		printf("\t %d",i);
		i=i+2;
	}
	
	printf("\n\n\t ...... odd Number ........\n\n");
	
	i=1;
	while(i<=10)
	{
		printf("\t %d",i);
		i=i+2;
	}
	
	printf("\n\n\t ...... sum of even Number ........");
	
	i=2;
	while(i<=10)
	{
		sumeven=sumeven+i;
		i=i+2;
	}
	printf("\n\n\t Sum of even number is : %d",sumeven);
	
	
	printf("\n\n\n\t ...... odd Number ........\n\n");
	
	i=1;
	while(i<=10)
	{
		sumodd=sumodd+i;
		
		i=i+2;
	}
	printf("\t Sum of odd number is : %d",sumodd);
}