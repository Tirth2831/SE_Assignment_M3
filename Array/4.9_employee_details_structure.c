/*
4.9 Write a program of structure employee that provides the following

a. information -print and display empno, empname, address andage

b. Write a program of structure for five employee that provides the following information -print and display
   empno, empname, address andage
*/

#include<stdio.h>
struct Employee
{
	int empno;
	char empname[50];
	char address[50];
	
}E;

main()
{
	int i;
	printf("\n\n\t Enter Employee Details   ");
	for(i=0;i<5;i++)
	{	
	printf("\n\n\t Enter a Employee Number : ");
	scanf("%d",&E.empno);
	printf("\n\n\t Enter a Employee Name : ");
	scanf("%s",&E.empname);
	printf("\n\n\t Enter a Employee Address : ");
	scanf(" %s",&E.address);
	
	printf("\n\n\t  Employee Details   ");
	printf("\n\n\t Employee Number : %d",E.empno);
	printf("\n\n\t Enter a Employee Name : %s",E.empname);
	printf("\n\n\t Enter a Employee Address : %s",E.address);
    }
    
    
	
	
	
	/* printf("\n\n\t Enter Employee Details   ");
	printf("\n\n\t Enter a Employee Number : ");
	scanf("%d",&E.empno);
	printf("\n\n\t Enter a Employee Name : ");
	scanf("%s",&E.empname);
	printf("\n\n\t Enter a Employee Address : ");
	scanf(" %s",&E.address);
	
	printf("\n\n\t  Employee Details   ");
	printf("\n\n\t Employee Number : %d",E.empno);
	printf("\n\n\t Enter a Employee Name : %s",E.empname);
	printf("\n\n\t Enter a Employee Address : %s",E.address);*/
	
	
}