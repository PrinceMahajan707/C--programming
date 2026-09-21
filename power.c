#include<stdio.h>
int main()
{
	int b,p,n,i;
	i=1;
	printf("Enter Base ");
	scanf("%d",&b);
	n=b;
	printf("Enter Power ");
	scanf("%d",&p);
	while(i<p)
	{
		b=b*n;
		i++;
	}
	printf("Ans is %d",b);
}
