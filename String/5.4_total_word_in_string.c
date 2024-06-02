/*
5.4 Write a program in C to count the total number of words in a string.
*/

#include<stdio.h>
main()
{
	int i,n=0;
	char str[20];
	
	printf("\n\n\t Enter a String : ");
	scanf("%s",&str);
	
	for(i=0;str[i]!=0;i++)
	{
		n++;
	}
	printf("\n\n\t Total Number of Words in string = %d",n);
}