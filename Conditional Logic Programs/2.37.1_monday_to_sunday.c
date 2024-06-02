/*
37. WAP to show
i. Monday to Sunday using switch case
*/

#include<stdio.h>
main()
{
	int n;
	printf("\n\n\t Enter A Number 1 to 7 : ");
	scanf("%d",&n);
	
	switch(n)
	{
		case 1 : printf("\n\n\t Monday");
		break;
		case 2 : printf("\n\n\t Tuesday");
		break;
		case 3 : printf("\n\n\t Wednesday");
		break;
		case 4 : printf("\n\n\t Thursday");
		break;
		case 5 : printf("\n\n\t Friday");
		break;
		case 6 : printf("\n\n\t Saturday");
		break;
		case 7 : printf("\n\n\t Sunday");
		break;
		default : printf("\n\n\t Invalid Number....");
		
	}
}