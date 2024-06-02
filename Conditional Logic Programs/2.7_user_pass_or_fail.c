/*
2.7 Accept marks from user and check pass or fail
*/
#include<stdio.h>
main()
{
	int mark;
	
	printf("\n\n\t Enter a marks : ");
	scanf("%d",&mark);
	
	if(mark>=40)
	   printf("\n\n\t Pass");
	else
	   printf("\n\n\t Fail ");   
}