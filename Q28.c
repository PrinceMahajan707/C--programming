#include<stdio.h>
void main()
{
	int n,p,r,sum;
	sum=0;
	printf("Enter Any Number ");
	scanf("%d",&n);
	p=n;
	while(n>0)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	if(sum==p)
	{
		printf("Armstrong Number ");
	}
	else
	{
		printf("Not Armstrong no.");
	}
}
