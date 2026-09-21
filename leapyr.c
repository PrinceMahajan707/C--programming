#include<stdio.h>
int main()
{
	int n;
	printf("Enter Year ");
	scanf("%d",&n);
	if(n%400==0)
	{
		printf("leap year ");
	}
	else if(n%4==0 && n%100!=0)
	{
		printf("leap year");
	}
	else
	{
		printf("not leap year");
	}
	
}
