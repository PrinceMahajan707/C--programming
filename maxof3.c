#include<stdio.h>
void main()
{
	int n1,n2,n3;
	printf("Enter n1 ");
	scanf("%d",&n1);
	printf("Enter n2 ");
	scanf("%d",&n2);
	printf("Enter n3 ");
	scanf("%d",&n3);
	if(n1>=n2 && n1>=n3)
	{
		printf("%d is maximum number ",n1);
	}
	else if(n2>=n3 && n2>=n1)
	{
		printf("%d is maximum number ",n2);
	}
	else
	{
		printf("%d is maximum number ",n3);
	}
}
