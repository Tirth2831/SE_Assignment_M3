/*
4.11  WAP to accept 5 numbers from user and display in reverse order using for loop and array
*/

#include<stdio.h>
main()
{
	int i,n[5];
	
	for(i=1;i<=5;i++)
	{
		printf("\n\n\t n[%d] : ",i);
		scanf("%d",&n[i]);
	}
	
	printf("\n\n\t ......Reverse.....");
	
	for(i=5;i>=1;i--)
	{
		printf("\n\n\t n[%d] : %d ",i,n[i]);
	}
	
}