/*
1.25 Accept 5 expense from user and find average of expense
*/

#include<stdio.h>
main()
{
	int i , sum;
	float avg;
	
	printf("\n\n\t enter user expenses 1 : ");
	scanf("%d",&i);
	printf("\n\n\t enter user expenses 2 : ");
	scanf("%d",&i);
	printf("\n\n\t enter user expenses 3 : ");
	scanf("%d",&i);
	printf("\n\n\t enter user expenses 4 : ");
	scanf("%d",&i);
	printf("\n\n\t enter user expenses 5 : ");
	scanf("%d",&i);
	
	sum=i+i+i+i+i;
	printf("\n\n\t Total expense : %d ",sum);
	
	avg=i/5;
	printf("\n\n\t Average : %.2f ",avg);
}