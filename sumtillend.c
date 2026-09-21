#include<stdio.h>
void main()
{
	int n,r,sum,p,r1;
	sum=0;
	printf("Enter Any NUmber ");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		sum=sum+r;
		p=sum;
		n=n/10;
	}
	sum=0;
	while(p>0)
	{
		r1=p%10;
		sum=sum+r1;
		p=p/10;
	}
	printf("sum= %d",sum);
}
