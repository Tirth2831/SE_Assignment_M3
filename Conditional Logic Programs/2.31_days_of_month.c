/*
2.31  Write a program in C to read any Month Number in integer and display the number of days for this month.
*/

#include<stdio.h>
main()
{
	int month;
	
	printf("\n\n\t Enter any Month in Number 1 to 12 : ");
	scanf("%d",&month);
	
	if(month == 2)
	printf("\n\n\t Days of this month : 28 ");
	else if(month % 2 == 0)
	printf("\n\n\t Day of this month : 30");
	else
	printf("\n\n\t Day of this month : 31");
}

