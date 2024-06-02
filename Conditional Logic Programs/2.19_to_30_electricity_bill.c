/*
2.19 Write a program in C to calculate and print the electricity bill of a given customer. 
The customer ID, name, and unit consumed by the user should be captured from the keyboard to display 
the total amount to be paid to the customer. The charge are as follow :
20. Unit 
21. Charge/unit
22. upto 350 - 23. @1.20
24. 350 and above but less than 600 - 25. @1.50
26. 600 and above but less than 800 - 27. @1.80
28. 800 and above - 29. @2.00
30.If bill exceeds Rs. 800 then a surcharge of 18% will be charged andthe minimum bill should be of Rs. 256/-
*/

#include<stdio.h>
main()
{
	int id, unit;
	char name[50];
	float charge, total, scharge;
	
	printf("\n\n\t Enter Customer ID : ");
	scanf("%d",&id);
	printf("\n\n\t Enter Customer Name : ");
	scanf("%s",&name);
	printf("\n\n\t Enter Consumed Unit By Customer : ");
	scanf("%d",&unit);
	
	if(unit <= 350)
	{
		charge=1.20;
	}
	else if (unit<600)
	{
		charge=1.50;
	}
	else if (unit<800)
	{
		charge=1.80;
	}
	else
	{
		charge=2.00;
	}
	
	total = unit*charge;
	
	if(total>800)
	{
		scharge= total*0.18;
		total =total + scharge;
	}
	if(total<256)
	{
		total=256;
	}
	
	printf("\n\n ............................Electricity Bill................................");
	printf("\n\n\t Customer ID : %d",id);
	printf("\n\n\t Customer Name : %s",name);
	printf("\n\n\t Unit Consumed : %d",unit);
	printf("\n\n\t Charge per Unit : %.2f",charge);
	printf("\n\n\t Total Amount before Surcharge : %.2f",total-scharge);
	printf("\n\n\t Surcharge : %.2f",scharge);
	printf("\n\n\t Total Amount After Surcharge : %.2f",total);
	
	
}