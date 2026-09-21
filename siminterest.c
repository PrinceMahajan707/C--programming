#include<stdio.h>
void main()
{
	int p,n;
	float r,si;
	printf("Enter Principal ");
	scanf("%d",&p);
	printf("Enter rate ");
	scanf("%f",&r);
	printf("Enter no. of year ");
	scanf("%d",&n);
	si=p*r*n;
	printf("simple interest =%f",si);
}
