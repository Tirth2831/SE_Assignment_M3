/*
3.24. 1 + 2 + 3 + 4 + 5 + ... + n
*/
#include<stdio.h>
main()
{
	int i,n,sum=0;
	
	printf("\n\n\t Enter a Number To print Series : ");
	scanf("%d",&n);
	
	for(i=0;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("\n\n\t Sum = %d",sum);
}