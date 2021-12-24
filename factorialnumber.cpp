#include<stdio.h>
main()
{
	int i=1,factorial=1,n;
	printf("enter the value ");
	scanf("%d",&n);
	while(i<=n)
	{
		factorial=factorial*i;
		i=i+1;
	}
	printf("the factorial is%d",factorial);
}
