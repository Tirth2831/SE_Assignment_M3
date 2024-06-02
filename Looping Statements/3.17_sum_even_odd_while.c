/*
3.17 Calculate 5 numbers from user and calculate number of even and odd using of while loop
*/
#include<stdio.h>
main()
{
	int i,n,sume=0,sumo=0;
	
	i=1;
	while(i<=5)
	{
		printf("\n\n\t Enter a number : ");
		scanf("%d",&n);
		if(n%2==0)
		{
			sume+=n;
		}
		else
		{
			sumo+=n;
	    }
	    i++;
	}
	printf("\n\n\t Sum of Even Number : %d",sume);
	printf("\n\n\t Sum of odd Number : %d",sumo);
	
}