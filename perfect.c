#include<stdio.h>
void main()
{
	int n,i,p,sum;
	printf("Enter Any Number ");
	scanf("%d",&n);
	sum=0;
	p=n;
	i=1;
	while(i<n)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
		i++;
	}
	if(sum==p)
	{
		printf("Perfect Number");
	}
	else
	{
		printf("not a Perfect number");
	}
		
}
