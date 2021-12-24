#include<stdio.h>
main()
{
	float i=1,n,count=0;
	printf("\n given the  number");
	scanf("%d",&n);
	while(i<=n)
	{
		if(n%1==0)
		count++;
		i++;
	}
	if(count<=2)
	printf("\n it is a prime number");
	else
	printf("\n not a prime number");
}





















