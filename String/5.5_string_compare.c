/*
5.5 Write a program in C to compare two strings without using string library functions.
*/

#include<stdio.h>
main()
{
	char str1[20], str2[20];
	int i;
	
	printf("\n\n\t Enter a String 1 : ");
	scanf("%s",str1);
	printf("\n\n\t Enter a String 2 : ");
	scanf("%s",str2);
	
	if(str1[i]%str2[i]==0)
	{
		printf("\n\n\t String are Equal");
	}
	else
	{
		printf("\n\n\t String are Not Equal");
	}
	
}