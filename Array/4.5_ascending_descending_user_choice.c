/*
4.5.  WAP to take two Array input from user and sort them in ascending or descending order as per user’s choice
*/

#include<stdio.h>
main()
{
	int i,j,k,n[2],temp,choice;
	
	for(i=0;i<2;i++)
	{
		printf("\n\n\t n[%d] : ",i);
		scanf("%d",&n[i]);
	}
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2-i-1;j++)
		{
			if(n[j]>n[j+1])
			{
				temp=n[j];
				n[j]=n[j+1];
				n[j+1]=temp;
			}
		}
	}
	for(i=0;i<2;i++)
	{
		for(k=2;k>0;k--)
		{
			if(n[k]>n[k-1])
			{
				temp=n[k];
				n[k]=n[k-1];
				n[k-1]=temp;
			}
		}
	}
	printf("\n\n\t User Choice Ascending order or Descending order ");
	printf("\n\n\t press 1 for Ascending order ");
	printf("\n\n\t press 2 for Descending order ");
	printf("\n\n\t ........................");
	printf("\n\n\t Input your Choice operation : ");
	scanf("%d",&choice);
	
	
		switch(choice)
	{
		case 1 : printf("\n\n\t Ascending Order : %d %d ",n[j],n[j+1]);
		         break;
		case 2 : printf("\n\n\t Descending Order : %d %d ",n[k+1],n[k]);
		         break;  
		default : printf("\n\n\t Invalid Choice !!! Try Again");
				 break;       
	}
	
	
	
}