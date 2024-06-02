/*
5.1  Write a program in C to find the length of a string without using library functions.
*/
#include<stdio.h>
#include<string.h>
main()
{
	int i  ,len;
	char str[50];
	
	printf("\n\n\t Enter a value : ");
	scanf("%s",&str);
	
	len=strlen(str);
	printf("\n\n\t Length of String is : %d",len);
/*	i=0;
	while(str[i]!=0)
	{
		i++;
	}
	printf("\n\n\t Length of String is : %d",i);
	*/
	
}