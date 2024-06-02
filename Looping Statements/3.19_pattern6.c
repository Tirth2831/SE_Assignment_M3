/*
3.19 pattern : 
*
* *
* * *
* * * *
* * * * *
* * * * * *
* * * * *
* * * * 
* * *
* *
*
*/

#include<stdio.h>
main()
{
	int i, j, k=6, l;
	
	i=1;
	while(i<=k)
	{
		j=1;
		while(j<=i)
		{
			printf(" *");
			j++;
		}
		
		printf("\n");
		i++;
		
	}
	i=k-1;
	while(i>=1)
	{
		l=1;
		while(l<=i)
		{
			printf(" *");
			l++;
			
		}
		printf("\n");
		i--;
	}
}