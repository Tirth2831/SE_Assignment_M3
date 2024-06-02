/*
3.19 pattern : 
            *
         *  *  *
      *  *  *  *  *
   *  *  *  *  *  *  *
*  *  *  *  *  *  *  *  *
*/
#include<stdio.h>
main()
{
	int i,j,k=5,l;
	i=0;
	while(i<5)
	{
		j=0;
		while(j<k-i-1)
		{
			printf("  ");
			j++;
		}
		l=0;
		while(l<2*i+1)
		{
			printf("* ");
			l++;
		}
		
		printf("\n");
		i++;
	}
}
