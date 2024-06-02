/*
3.25. (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)
*/
#include<stdio.h>
main()
{
	int i,n,sum=0;
	
	printf("\n\n\t Enter a value : ");
	scanf("%d",&n);
	
	for(i=0;i<=n;i++)
	{
		sum=sum+(i*i);
	}
	printf("\n\n\t Sum = %d",sum);
}