/*
3.8  Write a program to find out the max from given number (E.g., No: -1562 Max number is 6)
*/

#include<stdio.h>
main()
{
	int i, n, max;
	
	printf("\n\n\t Enter a Number to Find A max number : ");
	scanf("%d",&n);

	while(n>0)
	{
		i= n%10;
		if(i>max)
		{
			max=i;
		}
		n=n/10;
		
	}
	printf("\n\n\t Max Number is : %d",max);
}