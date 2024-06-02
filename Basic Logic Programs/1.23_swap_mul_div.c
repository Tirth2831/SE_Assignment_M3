/*
1.23 WAP to calculate swap 2 numbers with using of multiplication and division.
*/

#include<stdio.h>
main()
{
	int num1,num2,num3;
	printf("\n\n\t a : ");
	scanf("%d",&num1);
	printf("\n\n\t b : ");
	scanf("%d",&num2);
	
	num3=num1;
	num1=num2;
	num2=num3;
	
	printf("\n\n\t..............................");
	printf("\n\n\t a : %d",num1);
	printf("\n\n\t b : %d",num2);
}
