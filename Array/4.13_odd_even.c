/*
4.13  WAP to accept 5 numbers from user and check entered number is even or odd using of array
*/

#include<stdio.h>
main()
{
	int i,n[5],odd,even;
	
	for(i=1;i<=5;i++)
	{
		printf("\n\n\t n[%d] : ",i);
		scanf("%d",&n[i]);
    }
	for(i=1;i<=5;i++)
	{
		if(n[i]%2==0)
		{
			printf("\n\n\t Even Number  %d ",n[i]);
		
		}
		else
		{
			printf("\n\n\t odd Number %d",n[i]);
		}
	}
	
}