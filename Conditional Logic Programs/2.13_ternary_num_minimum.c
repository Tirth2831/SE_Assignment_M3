/*
2.13 WAP to find minimum number among 3 numbers using ternary operator.
*/
#include<stdio.h>
main()
{
	int n1, n2, n3, min;
	
	printf("\n\n\t Enter a Number 1 : ");
	scanf("%d",&n1);
	printf("\n\n\t Enter a Number 2 : ");
	scanf("%d",&n2);
	printf("\n\n\t Enter a Number 3 : ");
	scanf("%d",&n3);
	
	min=(n1<n2) ? ((n1<n3)?n1:n3) : ((n2<n3)?n2:n3);
	
	printf("\n\n\t Minimum Number is : %d",min);
	
}