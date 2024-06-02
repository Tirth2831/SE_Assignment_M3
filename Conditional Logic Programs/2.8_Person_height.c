/*
2.8 WAP to accept the height of a person in centimeters and categorize the person according to their height.
*/
#include<stdio.h>
main()
{
	float h;
	
	printf("\n\n\t Enter Person Height in Centimeters : ");
	scanf("%.2f",&h);
	
	if(h < 140)
	{
	    printf("\n\n\t Height is Short ");
    }
	else if(h >= 140 && h < 155)
	{
	    printf("\n\n\t Height is Average ");
    }
	else if(h >= 155 &&  h < 170)
	{
		printf("\n\n\t Height is Tall ");
	} 
	else 
	{
		printf("\n\n\t Height is Very Tall ");
	}
	   
	
}