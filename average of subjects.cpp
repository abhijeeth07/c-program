#include<stdio.h>
main()
{ 
int a,b,c,d,e;
float A,P,T;
printf("enter the marks of five subjects");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
T=a+b+c+d+e;
A=T/5;
printf("average=%f",A);
P=(T/500)*100;
printf("percentage=%f",P);
}
