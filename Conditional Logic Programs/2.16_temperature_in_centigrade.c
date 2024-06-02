/*
2.16 Write a C program to read temperature in centigrade and display a suitable message according to the 
temperature state below:
Temp < 0 then Freezing weather
Temp 0-10 then Very Cold weather
Temp 10-20 then Cold weather
Temp 20-30 then Normal in Temp
Temp 30-40 then Its Hot
Temp >=40 then Its Very Hot
*/

#include<stdio.h>
main()
{
	int t;
	printf("\n\n\t Enter a Temperature in centigreade : ");
	scanf("%d",&t);
	
	if(t<0)
	{
		printf("\n\n\t Freezing Weather ");
	}
	else if(t>0 && t<=10)
	{
		printf("\n\n\t Very Cold weather ");
	}
	else if(t>10 && t<=20)
	{
		printf("\n\n\t Cold weather ");
	}
	else if(t>20 && t<=30)
	{
		printf("\n\n\t Normal in Tempreture ");
	}
	else if(t>30 && t<=40)
	{
		printf("\n\n\t Its Hot ");
	}
	else
	{
		printf("\n\n\t Its Very Hot ");
	}
}