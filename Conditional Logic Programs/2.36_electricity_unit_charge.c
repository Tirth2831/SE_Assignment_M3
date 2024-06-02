/*
2.36 Write a C program to input electricity unit charges and calculate total
electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill
*/

#include<stdio.h>
main()
{
	float units, charge, bill, scharge = 0;

    printf("\n\n\t Enter the number of electricity units consumed: ");
    scanf("%f", &units);
    
    if (units <= 50)
	{
		charge=0.50;
	}    
    else if(units <= 150)
    {
    	charge=0.75;
	}
	else if (units <= 250)
	{
        charge=1.20;
	}
    else
    {
        charge=1.50;
	}
    bill = units * charge;
    scharge = bill * 0.20;
    bill = bill + scharge;

    printf("\n\n ............................Electricity Bill................................");
	printf("\n\n\t Unit Consumed : %d",units);
	printf("\n\n\t Charge per Unit : %.2f",charge);
	printf("\n\n\t Total Amount before Surcharge : %.2f",bill-scharge);
    printf("\n\n\t Total electricity bill: %.2f", bill);

}