/*
5.2 Write a program in C to separate individual characters from a string.
*/

#include<stdio.h>
main()
{
	int i;
	char str[50];
	
	printf("\n\n\t Enter a string value : ");
	scanf("%s",&str);
	
	printf("\n\n\t...Individual....");
	for(i=0;str[i]!=0;i++)
	{
		printf("\n\n\t %c ",str[i]);
	}
}