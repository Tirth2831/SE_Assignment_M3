/*
4.3. WAP to find reverse of string using recursion
*/

#include<stdio.h>

void print_reverse(char *s);

main()
{
	char s[50];
	
	printf("\n\n\t Enter a Line to Print Reverse : ");
	scanf("%s",&s);
	print_reverse(s);
	printf("\n");
	
}

void print_reverse(char *s)
{
	if(*s !=0)
	{
		print_reverse(s+1);
		printf(" %c",*s);
		
	}
	printf("\n");
}