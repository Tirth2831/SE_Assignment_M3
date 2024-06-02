/*
1.29 Convert minutes into seconds and hours
*/

#include<stdio.h>
main()
{
	int m,s;
	float h;
	
	printf("\n\n\t Enter a Minutes : ");
	scanf("%d",&m);
	
	s=m*60;
	printf("\n\n\t Minutes to Seconds: %d",s);
	h=m/60;
	printf("\n\n\t Minutes to hours: %.2f",h);
}