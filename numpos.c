#include<stdio.h>
void main()
{
	int n,k,pos,n1,r;
	pos=0;
	k=0;
	printf("Enter Any Number ");
	scanf("%d",&n);
	printf("Enter Number u want to find ");
	scanf("%d",&n1);
	while(n>0)
	{
		r=n%10;
		if(r==n1)
		{
			k=1;
			pos++;
		}
		n=n/10;
	}
	if(k==1)
	{
		printf("Number is found ");
		printf("\nIt Found %d times",pos);
	}
	else
	{
		printf("Number is not Found");
	}
}
