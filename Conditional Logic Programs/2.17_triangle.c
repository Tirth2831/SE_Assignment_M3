/*
2.17 Write a C program to check whether a triangle can be formed with the given values for the angles.

*/
#include <stdio.h>
main()
{
    float n1, n2, n3 , total;

    printf("\n\n\t Enter the first Number : ");
    scanf("%f",&n1);
    printf("\n\n\t Enter the second Number : ");
    scanf("%f",&n2);
    printf("\n\n\t Enter the third Number : ");
    scanf("%f",&n3);
    
    total=n1 + n2 +n3;
    printf("\n\n\t Total : %.2f",total);

    
    if(total==180)
	{
        printf("\n\n\t The triangle can be formed ");
    } 
	else 
	{
        printf("\n\n\t The triangle can not be formed ");
    }

}
