/*
2.15 Write a C program to determine eligibility for admission to a professional course based on the following 
criteria Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks in Chem>=50 and Total in 
all three subject >=190 or Total in Maths and Physics >=140
 --------------------------------------
 Input the marks obtained in Physics :65 Input the marks obtained in Chemistry :51 Input the marks
obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry : 188 Total marks of Maths and 
Physics : 137 The candidate is not eligible.

*/

#include<stdio.h>
main()
{
	int m, p, c, total, mp;
	m=72;
	p=65;
	c=51;
	total=188;
	mp=137;
	
	if(m>=65 && p>=55 && c>=50 && total>=190)
	{
		printf("\n\n\t The Candidate is Eligible ");
	}

	else if(mp>=140)
	{
		printf("\n\n\t The Candidate is Eligible ");
	}
	else
	{
		printf("\n\n\t The Candidate is not Eligible");
	}
}