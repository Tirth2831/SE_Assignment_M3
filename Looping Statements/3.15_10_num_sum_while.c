/*
3.15 Calculate sum of 10 numbers using of while loop.
*/
#include<stdio.h>
main()
{
	int i, n, sum=0;
	
	i=0;
    while(i<10)
	{
		printf("\n\n\t Enter a Number : ");
		scanf("%d",&n);
		sum=sum+n;
		i++;
	} 

	printf("\n\n\t Sum of 10 number = %d",sum);
}