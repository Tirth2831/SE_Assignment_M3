/*
3.11  Accept 5 names from user at run time.
*/

#include<stdio.h>
main()
{
	int i;
	char name[5][50];
	
	i=0;
	while(i<5)
	{
		printf("\n\n\t name : ");
		scanf("%s",name[i]);
		i++;
	}
	
	printf("\n\n\t ..... Name.....");	
	
    i=0;
	while(i<5)
	{
		printf("\n\n\t name : %s ",name[i]);
		i++;
	}
}