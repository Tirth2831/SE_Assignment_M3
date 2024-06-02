/*
2.6  Find the Character Is Vowel or Not.
*/

#include<stdio.h>
main()
{
	char ch;
	
	printf("\n\n\t Input any charactar : ");
	scanf("%c",&ch);
	
	if(ch=='a' || ch=='A')
		printf("\n\n\t Vowel...");

	else if(ch=='e' || ch=='E')
		printf("\n\n\t Vowel...");
	
	else if(ch=='i' || ch=='I')
		printf("\n\n\t Vowel...");
		
	else if(ch=='o' || ch=='O')
		printf("\n\n\t Vowel...");
	
	else if(ch=='u' || ch=='U')
		printf("\n\n\t Vowel...");

	else
		printf("\n\n\t Consonant...");
}
