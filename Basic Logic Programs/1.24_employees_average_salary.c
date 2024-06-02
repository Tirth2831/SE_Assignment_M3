/*
1.24 Accept 5 employees name and salary and count average and total salary
*/

#include<stdio.h>
main()
{
	int name, salary, sum;
	float avg;
	
	printf("\n\n\t Enter name : ");
	scanf("%s",&name);
	printf("\t Enter salary : ");
	scanf("%d",&salary);
	printf("\n\n\t Enter name : ");
	scanf("%s",&name);
	printf("\t Enter salary : ");
	scanf("%d",&salary);
	printf("\n\n\t Enter name : ");
	scanf("%s",&name);
	printf("\t Enter salary : ");
	scanf("%d",&salary);
	printf("\n\n\t Enter name : ");
	scanf("%s",&name);
	printf("\t Enter salary : ");
	scanf("%d",&salary);
	printf("\n\n\t Enter name : ");
	scanf("%s",&name);
	printf("\t Enter salary : ");
	scanf("%d",&salary);
	
	sum=salary+salary+salary+salary+salary;
	printf("\n\n\t Total Salary : %d",sum);
	
	avg=sum/5;
	printf("\n\n\t %.2f",avg);
	
}