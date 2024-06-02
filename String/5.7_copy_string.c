/*
5.7  Write a program in C to copy one string to another string.
*/
#include<stdio.h>
#include<string.h>
main()
{
	char str1[20] , str2[20];
	int i;
	
	printf("\n\n\t Input a string : ");
	scanf("%s",&str1);
	
	strcpy(str2,str1);
	printf("\n\n\t string after copying : %s",str2);
	
	/*for(i=0;str1[i]!=0;i++)
	{
		str2[i]=str1[i];
	}
	str2[i]=0;
	printf("\n\n\t copy String : %s",str2);
	*/
}