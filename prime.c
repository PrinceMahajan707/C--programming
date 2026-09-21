#include<stdio.h>
void main()
{
	int n,i,c;
	c=0;
	i=1;
	printf("Enter Any Number ");
	scanf("%d",&n);
	while(i<=n)
	{
		if(n%i==0)
		{
			c++;
		}
		i++;
	}
	if(c==2)
	{
		printf("Prime Number ");
	}
	else
	{
		printf("Not Prime Number");
	}
}
