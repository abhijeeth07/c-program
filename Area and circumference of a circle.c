#include<stdio.h>
main()
{
	float r,area,circumference;
	printf("Enter the radius:");
	scanf("%f",&r);
	area=3.14*r*r;
	circumference=2*3.14*r;
	printf("The area of the circle is: %f",area);
	printf("\nThe circumference of the circle is: %f",circumference);
}
