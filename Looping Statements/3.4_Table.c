/*
3.4 WAP to print table up to given numbers
*/
#include<stdio.h>
main()
{
	int i, number;
	
	printf("\n\n\t Enter a Number to print Their Table : ");
	scanf("%d",&number);
	
	i=1;
	while(i<=10)
	{
		printf("\n\n\t %d * %d = %d",number,i,(number*i));
		i++;
	}
}