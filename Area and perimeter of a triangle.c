#include<stdio.h>
main()
{
	float s,b,h,a,p;
	printf("Enter the base, height and another side of the triangle:");
	scanf("%f%f%f",&b,&h,&s);
	a=0.5*b*h;
	p=s+b+h;
	printf("The area is: %f",a);
	printf("\nThe perimeter is: %f",p);
}
