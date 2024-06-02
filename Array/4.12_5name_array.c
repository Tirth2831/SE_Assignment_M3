/*
4.12  WAP to accept 5 students name and store it in array
*/

#include<stdio.h>
main()
{
	int i;
	char name[5][100];
	
	for(i=1;i<=5;i++)
	{
		printf("\n\n\t name[%d] = ",i);
		scanf("%s",&name[i]);
	}
	for(i=1;i<=5;i++)
	{
		printf("\n\n\t Student %d = %s ",i,name[i]);
	}
	
}