/*
1.26 Convert temperature Fahrenheit to Celsius
(32°F − 32) × 5/9 = °C
*/

#include<stdio.h>
main()
{
	int i ;
	float j;
	
	printf("\n\n\t Enter a Temperature in Fahrenheit : ");
	scanf("%d",&i);
	
	j=(i-32)*5/9;
	printf("\n\n\t %.2f",j);
}