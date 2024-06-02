/*
3.2  WAP to accept 5 numbers from user and display all numbers.
*/

#include<stdio.h>
main()
{
	int n, m=0;
	
	n=0;
	while(n<5)
	{
		printf("\n\n\t Enter a Number :  ",n);
		scanf("%d",&n);
		n++;
	}
	
	printf("\n\n\t Display Number : %d ",n);
	

}