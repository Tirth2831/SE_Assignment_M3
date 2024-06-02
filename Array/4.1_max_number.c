/*
4.1  Write a program to find out the max number from given array using function
*/
#include<stdio.h>
main()
{
	int i,n[5],max;
	
	for(i=1;i<=5;i++)
	{
		printf("\n\n\t Enter a number n[%d] : ",i);
		scanf("%d",&n[i]);
	}
	for(i=1;i<=5;i++)
	{
		if(n[i]>n[i+1])
		{
			max=n[i];
		}
		
	}
	printf("\n\n\t Maximum : %d",max);
	
	
}