/*12
3.19 pattern : 
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/

#include<stdio.h>
main()
{
	int i,j , k=1;
	
	i=1;
	while(i<=5)
	{
		j=1;
		while(j<=i)
		{
			printf(" %d",k);
			k++;
			j++;
		}
		i++;
		printf("\n");
	}
}