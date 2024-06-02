/*
3.16 Calculate the Sum of Natural Numbers Using the While Loop
*/
#include<stdio.h>
main()
{
	int i,n,sum=0;
	
	printf("\n\n\t enter a number : ");
	scanf("%d",&n);
	
	i=1;
	while(i<=n)
	{
		sum=sum+i;
		++i;
	}
	printf("\n\n\t Sum of Natural Number : %d ",sum);
}