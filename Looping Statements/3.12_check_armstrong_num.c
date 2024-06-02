/*
3.12 Program of Armstrong Number in C Using For Loop & While Loop.
*/
#include<stdio.h>
main()
{
	int n, rem, orginal, sum=0;
	
	printf("\n\n\t Enter a Number to Check Armstrong Number : ");
	scanf("%d",&n);
	
	orginal=n;
	
	while(n>0)
	{
		rem=n%10;
		sum=sum+(rem*rem*rem);
		n=n/10;
	}
	if(orginal==sum)
	{
		printf("\n\n\t Armstrong Number ");
	}
	else
	{
		printf("\n\n\t Not Armstrong Number ");
	}
}