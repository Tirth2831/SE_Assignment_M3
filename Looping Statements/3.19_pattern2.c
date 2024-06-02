/*
3.19 pattern:
A
B C
D E F
G H I J
K L M N O
*/

#include<stdio.h>
main()
{
	int x,y;
	char ch='A';
	
	x=1;
	while(x<=5)
	{
		y=1;
		while(y<=x)
		{
			printf(" %c",ch);
			ch++;
			y++;
		}
		x++;
		printf("\n");
	}
}