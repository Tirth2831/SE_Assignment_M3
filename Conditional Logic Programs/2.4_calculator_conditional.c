/*
2.4 WAP to make simple calculator (operation include Addition, Subtraction, Multiplication, Division, modulo) 
using conditional statement.
*/

#include<stdio.h>
main()
{
	int n1, n2;
	char choice;
	
	printf("\n\n\t Input n1 : ");
	scanf("%d",&n1);
	printf("\n\n\t Input n2 : ");
	scanf("%d",&n2);
	
	printf("\n\n\t ................................");
	printf("\n\n\t Press + for Addition.");
	printf("\n\n\t Press - for Subtraction.");
	printf("\n\n\t Press * for Multiplication.");
	printf("\n\n\t Press / for Division.");
	printf("\n\n\t Press % for Modulo.");
	printf("\n\n\t ................................");
	printf("\n\n\t Input your choice of operation : ");
	scanf(" %c",&choice);
	
	if(choice=='+')
		printf("\n\n\t Addition = %d",n1+n2);
	
	else if(choice=='-')
		printf("\n\n\t Subtraction = %d",n1-n2);
		
	else if(choice=='*')
		printf("\n\n\t Multiplication = %d",n1*n2);
		
	else if(choice=='/')
		printf("\n\n\t Division = %d",n1/n2);
		
	else if(choice=='%')
		printf("\n\n\t Division = %d",n1%n2);	
		
	else
		printf("\n\n\t Invalid choice!!!! try again");
}
