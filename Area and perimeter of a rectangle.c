#include<stdio.h>
main()
{
	int l,b,area,perimeter;
	printf("Enter length and breadth:");
	scanf("%d%d",&l,&b);
	area=l*b;
	perimeter=2*(l+b);
	printf("The area of the rectangle is: %d",area);
	printf("\nThe perimeter of the rectangle is: %d",perimeter);
}
