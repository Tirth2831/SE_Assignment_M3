/*
4.14  Perform 2D matrix array
*/
#include<stdio.h>
main()
{
	int  n[2][2],i, j;
	
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\n\n\t n[%d][%d] : ",i,j);
			scanf("%d",&n[i][j]);
		}
	}
	printf("\n\n\t Matrix \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf(" %d ",n[i][j]);
		}printf("\n");
	
	}	
	
	
}