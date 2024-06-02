/*
5.6 Write a program in C to count the total number of alphabets, digits and special characters in a string.
*/

#include<stdio.h>
main()
{
	int i, al=0, n, c=0;
	char str[20];
	
	printf("\n\n\t Enter a String : ");
	scanf("%s",&str[i]);
	
	for(i=0;str[i]!=0;i++)
	{
		if((str[i] >= 'a' && str[i] <='z') || (str[i] >= 'A' && str[i] <= 'Z'))
		al++;
		
		else if(str[i]>='0' && str[i] <='9')
		n++;
		
		else
		c++;
	}
	
	printf("\n\n\t Total Number of Alphabets : %d",al);
	printf("\n\n\t Total Number of Digits : %d",n);
	printf("\n\n\t Total Number of Characters : %d",c);
	
}