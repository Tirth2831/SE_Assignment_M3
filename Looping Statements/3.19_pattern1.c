/*
3.19 Patterns: 
1
1 0 
1 0 1
1 0 1 0
1 0 1 0 1
*/

#include<stdio.h>
main()
{
	int i,j;
	
	i=1;
	while(i<=5)
	{
		j=1;
		while(j<=i)
		{
			if(j%2==0)
			printf(" 0");
			else
			printf(" 1");
			j++;
		}
		i++;
		printf("\n");
	}
}