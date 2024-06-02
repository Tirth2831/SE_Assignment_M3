/*
1.19 Calculate compound interest
*/

#include<stdio.h>
main()
{
	int amount,time_duration,per_year_rate;
	float rate,interest;
	
	printf("\n\n\t enter amount : ");
	scanf("%d",&amount);
	
	printf("\n\n\t enter rate : ");
	scanf("%f",&rate);
	
	printf("\n\n\t enter time duration : ");
	scanf("%d",&time_duration);
	

	interest = amount*1+rate/time_duration-1;
	printf("\n\n\t interest : %f",interest);
}
