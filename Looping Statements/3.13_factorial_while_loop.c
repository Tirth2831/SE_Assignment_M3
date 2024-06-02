/*
3.13 calculate the Factorial of a Given Number using while loop.
*/

#include<stdio.h>
main()
{
	int i, n, facto=1;

	printf("\n\n\t Enter a Number to print factorial Number : ");
	scanf("%d",&n);
	
	i=1;
	while(i<=n)
	{
		facto=facto*i;
		i++;
	}
	printf("\n\n\t Factorial Number : %d",facto);
	
}