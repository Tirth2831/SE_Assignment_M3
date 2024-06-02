/*
3.14 Accept 5 numbers from user and find those numbers factorials
*/
#include<stdio.h>
main()
{
	int i,n[5],fact=1;
	for(i=0;i<5;i++)
	{
		printf("\n\n\t Enter a Number : ");
		scanf("%d",&n[i]);
	}
	for(i=0;i<n[i];i++)
	{
		fact=fact*n[i];
	    printf("\n\n\t Factorial Number is : %d",fact);
	}

}
