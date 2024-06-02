/*
1.17 Calculate person’s insurance premium based on salary
*/

#include<stdio.h>
main()
{
	int salary;
	float insurance;
	
	printf("\n\n\t enter a salary : ");
	scanf("%d",&salary);
	insurance = salary/15;
	printf("\n\n\t insurance premium : %.2f",insurance);
}
