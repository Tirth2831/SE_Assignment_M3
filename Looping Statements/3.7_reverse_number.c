/*
3.7. WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746
*/

#include<stdio.h>
main()
{
	int n, rem, rev=0;
	
	printf("\n\n\t Reverse Number is = 64728 ");
	
	n=64728;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	printf("\n\n\t Reverse Number is = %d",rev);
}