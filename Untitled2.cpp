#include<stdio.h>
main()
{
  int n,i=1;
  printf("enter a number \n");
  scanf("%d",&n);
  while(n>=0)
  {
  	if (n%i==0)
  	{
  		printf(" perfect number");
  		
  		i++;
	  }
	  else
	  {
	  	printf(" not aperfect number");
	  }
  }
}
