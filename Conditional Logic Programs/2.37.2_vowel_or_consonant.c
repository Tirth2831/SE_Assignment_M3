/*
37. WAP to show
ii. Vowel or Consonant using switch case
*/

#include<stdio.h>
main()
{
	char c;
	printf("\n\n\t Enter char : ");
	scanf("%c",&c);
	
	switch(c)
	{
		case 'a': printf("\n\n\t Vowel");
		break;
		case 'e': printf("\n\n\t Vowel");
		break;
		case 'i': printf("\n\n\t Vowel");
		break;
		case 'o': printf("\n\n\t Vowel");
		break;
		case 'u': printf("\n\n\t Vowel");
		break;
		case 'A': printf("\n\n\t Vowel");
		break;
		case 'E': printf("\n\n\t Vowel");
		break;
		case 'I': printf("\n\n\t Vowel");
		break;
		case 'O': printf("\n\n\t Vowel");
		break;
		case 'U': printf("\n\n\t Vowel");
		break;
				  
		default : printf("\n\n\t Consonant");
		break;
	}
}
