/*
3.10  Write a program you have to make a summation of first and last Digit. (E.g. 1234 Ans: -5)
*/

#include<stdio.h>
main()
{
	int n, fnum, lnum, sum=0;
	
	printf("\n\n\t Enter a Number : ");
	scanf("%d",&n);
	
	lnum= n % 10;
	
	fnum= n;
	while(fnum>=10)
	{
		fnum=fnum/10;
	}
	
	sum = fnum + lnum;
	printf("\n\n\t Summation Of First and Last Number = %d",sum);
}