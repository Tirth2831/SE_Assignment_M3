/*
5.8  Write a program in C to count the total number of vowels or consonants in a string.
*/
#include<stdio.h>
main()
{
	int i , vowels=0, consonants=0 ;
	char str[20];
	
	printf("\n\n\t Enter a string : ");
	scanf("%s",str);
	
	for(i=0;str[i]!=0;i++)
	{
		if(str[i] == 'a' || str[i]=='A')
		vowels++;
		else if(str[i] == 'e'|| str[i]=='E')
		vowels++;
		else if(str[i] == 'i'|| str[i]=='I')
		vowels++;
		else if(str[i] == 'o'|| str[i]=='O')
		vowels++;
		else if(str[i] == 'u'|| str[i]=='U')
		vowels++;
		else
		consonants++;
		
	}
	printf("\n\n\t Total number of Vowels : %d",vowels);
	printf("\n\n\t Total number of consonants : %d",consonants);
	
}