/*
1.22 Calculate compound interest (Compound Interest formula:
     a. Formula to calculate compound interest annually is given by: Amount= P(1 + R/100)t
     b. Compound Interest = Amount – P  
*/

#include<stdio.h>
main()
{
	
	int p,r,t,amount,compound_interest;
	printf("\n\n\t enter p value : ");
	scanf("%d",&p);
	
	printf("\n\n\t enter r value : ");
	scanf("%d",&r);
	
	printf("\n\n\t enter t value : ");
	scanf("%d",&t);
	
	amount = p*1+r/100*t;
	printf("\n\n\t amount is: %d",amount);


	compound_interest=amount - p;
	printf("\n\n\t compound interest : %d",compound_interest);
	
	
}
