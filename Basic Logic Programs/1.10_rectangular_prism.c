/*
10. find the area of a rectangular prism formula : A=2(wl+hl+hw)
w=25
l=20
h=30
*/
#include<stdio.h>
main()
{
	int w,l,h,a;
	w=25;
	l=20;
	h=30;
	a= 2*((w*l)+(h*l)+(h*w));
	printf("\n\n\t Area of a Rectangular Prism = %d",a);
}