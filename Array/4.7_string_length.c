/*
4.7  WAP Find out length of string without using inbuilt function
*/

#include<stdio.h>
main()
{
	int len=0, strlen;
	char str[50];
	
	printf("\n\n\t Enter a String : ");
	scanf("%s",&str);
	
	while(*str!=0)
	{
		len++;
		
	}
	len = strlen;
	printf("\n\n\t Length of string : %d",len);
	
}