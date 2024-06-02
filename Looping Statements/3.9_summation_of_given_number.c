/*
3.9  Write a program make a summation of given number (E.g., 1523 Ans: -11)
*/

#include<stdio.h>
main()
{
	int n, i, sum;
	
	printf("\n\n\t Enter a Number : ");
	scanf("%d",&n);
	
	while(n>0)
	{
	    i= n%10;
		sum=sum+i;	
		n=n/10;
		
	} 
	printf("\n\n\t Summation : %d",sum);
}