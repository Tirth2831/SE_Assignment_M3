/*
3.27  1/2 - 2/3 + 3/4 - 4/5 + 5/6 ..........n
*/

#include<stdio.h>
main()
{
	int n,i,sum;
	printf("\n\n\t Enter a value : ");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		if(i%2==1)
		{
			sum += i / (i+1);
		}
		else
		{
			sum += i / (i+1);
		}
		
	}
	printf("\n\n\t Sum = %d",sum);
}