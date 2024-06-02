/*
2.18 Write a C program to calculate profit and loss on a transaction.
*/

#include<stdio.h>
main()
{
	int buy, sell, profit, loss;
	
	printf("\n\n\t Enter a Buying Price : ");
	scanf("%d",&buy);
	printf("\n\n\t Enter a selling Price : ");
	scanf("%d",&sell);
	
	if(sell>buy)
	{
		profit=sell-buy;
		printf("\n\n\t Profit is : %d",profit);
	}
	else if(buy>sell)
	{
		loss=buy-sell;
		printf("\n\n\t loss : %d",loss);
	}
	else
	{
		printf("\n\n\t cost to cost");
	}
}