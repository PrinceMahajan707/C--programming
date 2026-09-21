#include<stdio.h>
void main()
{
	int n,r,p;
	p=0;
	printf("Enter Number ");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		p++;
		n=n/10;
	}
	printf("no. of digits is %d",p);
}
