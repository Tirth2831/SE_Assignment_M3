/*
4.6  WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array
*/

#include<stdio.h>
main()
{
	int i,j, m1[2][2] , m2[2][2] , k, mul[2][2];
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\n\n\t m1[%d][%d] : ",i,j);
			scanf("%d",&m1[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\n\n\t m2[%d][%d] : ",i,j);
			scanf("%d",&m2[i][j]);
		}
	}
	
	printf("\n\n\t .........Matrix-1.........\n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf(" %d ",m1[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n\t .........Matrix-2.........\n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf(" %d ",m2[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n\t ......... Addition .........\n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf(" %d ",m1[i][j]+m2[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n\t ......... Subtraction .........\n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf(" %d ",m1[i][j]-m2[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			mul[i][j]=0;
			for(k=0;k<2;k++)
			{
				mul[i][j]=mul[i][j]+(m1[i][k]*m2[j][k]);
			}
		}
	}
	
	printf("\n\n\t ......... Multiplication .........\n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf(" %d ",mul[i][j]);
		}
		printf("\n");
	}
	
}