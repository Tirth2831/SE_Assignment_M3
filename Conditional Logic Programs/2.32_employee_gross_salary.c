/*
2.32 Write a C program to input basic salary of an employee and calculateits Gross salary according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%
*/
#include<stdio.h>
main()
{
	float salary, gsalary=0, hra, da;
	
	printf("\n\n\t Enter a Basic Salary of an Employee : ");
	scanf("%f",&salary);
	
	if(salary <= 10000)
	{
		hra=salary * 0.20;
		da=salary * 0.80;
	}
	else if(salary <= 20000)
	{
		hra=salary * 0.25;
		da=salary * 0.90;
	}
	else
	{
		hra=salary * 0.30;
		da=salary * 0.95;
	}
	gsalary = salary + hra + da;
	printf("\n\n\t Gross Salary = %.2f",gsalary);
}