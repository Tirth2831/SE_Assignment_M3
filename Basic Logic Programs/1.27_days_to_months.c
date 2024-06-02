/*
1.27 Convert days into months.
*/

#include<stdio.h>
main()
{
	int i;
	float j;
	printf("\n\n\t Input a days to convert in month formate : ");
	scanf("%d",&i);
	
	j=i/30;
	printf("\n\n\t Number of months is : %.2f",j);
}