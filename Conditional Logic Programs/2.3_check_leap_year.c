/*
2.3  WAP to check if the given year is a leap year or not
*/

#include<stdio.h>
main()
{
	int year;
	
	printf("\n\n\t Enter a Year to check Leap year or not : ");
	scanf("%d",&year);
	
	if(year%400==0)
	{
		printf("\n\n\t Year is leap year ");
	}
	else if (year%100==0)
	{
		printf("\n\n\t Year is not a leap year");
	}
	else if (year%4==0)
	{
		printf("\n\n\t Year is leap year ");
	}
	else
	{
		printf("\n\n\t Year is not a leap year ");
	}
}