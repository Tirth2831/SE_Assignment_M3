/*
1.2  Write a program to make Simple calculator (to make addition, subtraction,
multiplication, division and modulo) 
*/

#include<stdio.h>
main()
{
	// "Addition"
	printf("\n\n\t Addition");
	
	float a,b,c;
	a=15.25;
	b=55.65;
	c=a+b;
	
	printf("\n\n\t a = %.2f",a);
	printf("\n\n\t b = %.2f",b);
	printf("\n\n\t c = %.2f",c);
	printf("\n\n\t %.2f + %.2f = %.2f",a,b,c);
	
	// " Subtraction "
	printf("\n\n\t Subtraction");
	
	int d,e,f;
	d=65;
	e=5;
	f=d-e;
	printf("\n\n\t d = %d",d);
	printf("\n\n\t e = %d",e);
	printf("\n\n\t f = %d",f);
	
	printf("\n\n\t %d - %d = %d",d,e,f);
	
	// " Multiplication "
	printf("\n\n\t Multiplication");
	
	int g,h,i;
	g=65;
	h=5;
	i=d*e;
	printf("\n\n\t g = %d",g);
	printf("\n\n\t h = %d",h);
	printf("\n\n\t i = %d",i);
	
	printf("\n\n\t %d * %d = %d",g,h,i);
	
	// " Division "
	printf("\n\n\t Division");
	
	int j,k,l;
	j=600;
	k=50;
	l=j/k;
	printf("\n\n\t j = %d",j);
	printf("\n\n\t k = %d",k);
	printf("\n\n\t l = %d",l);
	
	printf("\n\n\t %d / %d = %d",j,k,l);
	
	// " Modulo "
	printf("\n\n\t Modulo");
	
	int m,n,o;
	m=100;
	n=77;
	o=m%n;
	printf("\n\n\t m = %d",m);
	printf("\n\n\t n = %d",n);
	printf("\n\n\t o = %d",o);

}