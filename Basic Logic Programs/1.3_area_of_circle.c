/* 
1.3 WAP to Find Area And Circumference of Circle
Area = PI*r*r  
Circum = 2*PI*r 
PI = 3.14
r = 50
*/ 

#include<stdio.h>
main()
{
	int r=50;
	float pi=3.14,area,circum;
	
	area=pi*r*r;
	circum=2*pi*r;
	printf("\n\n\t Area Of Circle = %f",area);
	printf("\n\n\t Area Of Circum = %f",circum);
}