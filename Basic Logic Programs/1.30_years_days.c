/*
1.30 WAP to convert years into days and days into years
*/
#include<stdio.h>
main()
{
	int day;
	float year;
	
	printf("\n\n\t Input a Year : ");
	scanf("%f",&year);
	
	day=year*365;
	printf("\n\n\t Convert year to days : %d",day);
	
	printf("\n\n\t Input a days : ");
	scanf("%f",&day);
	
	year=day / 365;
	printf("\n\n\t Convert days to year : %f",year);
}