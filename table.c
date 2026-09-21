#include<stdio.h>
int main()
{
	int n,i;
	i=1;
	printf("Enter Any number ");
	scanf("%d",&n);
	while(i<=10)
	{
		printf("\n%d * %d = %d",n,i,n*i);
		i++;
	}
}

