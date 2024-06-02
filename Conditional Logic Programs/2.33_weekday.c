/*
2.33 WAP to input the week number and print week day.
*/
#include<stdio.h>
main()
{
	int weeknumber;
	printf("\n\n\t Enter a Week Number 1 to 7 : ");
	scanf("%d",&weeknumber);
	
	switch (weeknumber)
	{
		case 1: printf("\n\n\t Monday ");
		break;
		case 2: printf("\n\n\t Tuesday ");
		break;
		case 3: printf("\n\n\t Wednesday ");
		break;
		case 4: printf("\n\n\t Thursday ");
		break;
		case 5: printf("\n\n\t Friday ");
		break;
		case 6: printf("\n\n\t Saturday ");
		break;
		case 7: printf("\n\n\t Sunday ");
		break;
		
		default : printf("\n\n\t Invalid Week Number....");
	}
}