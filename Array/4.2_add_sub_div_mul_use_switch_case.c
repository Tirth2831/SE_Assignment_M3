/*
4.2. WAP of Addition, Subtraction, Multiplication and Division using Switch case.(Must Be Menu Driven)
*/

#include<stdio.h>
main()
{
	int i,n1,n2;
	char choice;

	printf("\n\n\t Enter a number 1 : ");
	scanf("%d",&n1);
	printf("\n\n\t Enter a number 2 : ");
	scanf("%d",&n2);
	
	
	printf("\n\n\t ........................");
	printf("\n\n\t press + for Addition ");
	printf("\n\n\t press - for Subtraction ");
	printf("\n\n\t press * for Multiplication ");
	printf("\n\n\t press / for Division ");
	printf("\n\n\t ........................");
	printf("\n\n\t Input your Choice operation : ");
	scanf(" %c",&choice);
	
	switch(choice)
	{
		case '+' : printf("\n\n\t Addition = %d",n1+n2);
				break;
		case '-' : printf("\n\n\t Subtraction = %d",n1-n2);
				break;
		case '*' : printf("\n\n\t Multiplication = %d",n1*n2);
				break;
		case '/' : printf("\n\n\t Division = %d",n1/n2);
			   	break;
		
		default : printf("\n\n\t Enter a valid choice.. Try Again");
				break;
	}
}