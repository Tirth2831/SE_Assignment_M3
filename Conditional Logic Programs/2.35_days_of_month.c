/*
2.35 Accept the input month number and print number of days in that month.
*/
#include<stdio.h>
main()
{
	int number;
	printf("\n\n\t Enter a Month Number 1 to 12 : ");
	scanf("%d",&number);
	
	switch(number)
	{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12: 
		printf("\n\n\t Number of days in this Month is 31 ");
		break;
		case 2 : printf("\n\n\t Number of days in this Month is 28 ");
		break;
		case 4: case 6: case 9: case 11:
	    printf("\n\n\t Number of days in this Month is 30 ");
		break;
		
		default : printf("\n\n\t Invalid Month Number ..... ");
	}
}