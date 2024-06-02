/*
3.22  Accept 3 numbers from user using while loop and check each numbers palindrome
*/
#include<stdio.h>
main()
{
	int n, rev, rem ,orignal;
	
	printf("\n\n\t Enter a Number : ");
	scanf("%d",&n);
	
	orignal=n;
	while(n!=0)
	{
		rem= n%10;
		rev=rev*10+rem;
		n=n/10;
		
	}
	if(orignal==rev)
	{
		printf("\n\n\t Number is Palindrome ");
	}
	else
	{
		printf("\n\n\t Number is Not Palindrome ");
	}
	
}