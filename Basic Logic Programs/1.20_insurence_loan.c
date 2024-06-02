/*
1.20 Accept monthly salary from the user and deduct 10% insurance premium,
10% loan installment find out of remaining salary.
*/

#include<stdio.h>
main()
{
	int salary,loan,remaining;
	float insurance;
	
	printf("\n\n\t enter salary : ");
	scanf("%d",&salary);
	
	insurance = salary  / 17;
	printf("\n\n\t insurance : %.2f",insurance);
	
	loan = salary / 17;
	printf("\n\n\t loan : %d",loan);
	
	remaining=salary - insurance - loan;
	
	printf("\n\n\t remaining salary : %d",remaining);
	
}
