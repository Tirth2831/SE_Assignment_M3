/*
4.8  WAP to reverse a string and check that the string is palindrome or not 
*/

#include<stdio.h>

void reverse(char *s);

main()
{
	char s[70];
	printf("\n\n\t Enter a string : ");
	scanf("%s",&s);
	reverse(s);
	printf("\n");
	if(*s=s)
		printf("\n\n\t String is Palindrome.. ");
	else
		printf("\n\n\t String is not Palindrome..");	
}

void reverse(char *s)
{
	if(*s != 0)
	{
		reverse(s+1);
		printf("%c",*s);
	}
}