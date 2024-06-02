/*
3.19 pattern :
A
A B
A B C
A B C D
A B C D E
*/

#include<stdio.h>
main()
{
	int i, j ;
	char ch='A';
	
	i=1;
	while(i<=5)
	{
		j=1;
		while(j<=i)
		{
			printf(" %c",ch++);
			
			j++;
		
		}
		i++;
		printf("\n");
		ch='A';
		
	}
}