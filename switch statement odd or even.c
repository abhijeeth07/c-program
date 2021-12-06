#include<stdio.h>
main()
{
	int a,K;
	printf("enter a value");
	scanf("%d",&a);
	K= a%2;
	switch (K)
	{
		case 0:printf("even number");
		break;
		case 1:printf("odd number");
		break;
		default:printf("enter a valid number");
		
	}
}
