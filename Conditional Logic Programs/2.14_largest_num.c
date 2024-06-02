/*
2.14 WAP to find the largest of three numbers.
*/
#include<stdio.h>
main()
{
	int n1, n2, n3, lar;
	printf("\n\n\t Enter a Number : ");
	scanf("%d %d %d",&n1,&n2,&n3);
	
	if(n1>n2)
	   lar=n1;
	else if(n2>n3)
	   lar=n2;
	else
	   lar=n3;
	  
	printf("\n\n\t Largest Number is : %d",lar);	
}