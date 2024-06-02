/*
3.26 (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)
*/
#include<stdio.h>
main()
{
	int i,j,n,sumi,sum=0;
	
	printf("\n\n\t Enter a value : ");
	scanf("%d",&n);
	
	for(i=0;i<=n;i++)
	{
		sumi=0;
		for(j=0;j<=i;j++)
		{
			sumi=sumi+j;
		}
		sum=sum+sumi;
	}
	printf("\n\n\t Sum = %d",sum);
}