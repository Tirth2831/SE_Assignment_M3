/*
1.28 Convert years into days and months.
*/
#include<stdio.h>
main()
{
	int day, month;
	float year;
	printf("\n\n\t Input a year  : ");
	scanf("%f",&year);
	
	month=year*12;
	printf("\n\n\t Number of months is : %d",month);
	
	day=year*365;
	printf("\n\n\t Number of days : %d",day);
}