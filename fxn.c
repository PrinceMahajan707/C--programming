#include<stdio.h>
void main()
{
	int x,n,ans;
	printf(" if n=1 : 1+x \n if n=2 : 1+x/n \n if n=3 : 1+x^n \n if n>3 : 1+nx");
	printf("\n`----------------------------------------------------------");
	printf("\nEnter x ");
	scanf("%d",&x);
	printf("\nEnter N ");
	scanf("%d",&n);
	
	if(n==1)
	{
		ans=1+x;
		printf("ans = %d",ans);
	}
	else if(n==2)
	{
		ans=1+(x/n);
		printf("ans = %d",ans);
	}
	else if(n==3)
	{
		ans=1+x*x*x;
		printf("ans = %d",ans);
	}
	else
	{
		ans=1+(n*x);
		printf("ans = %d",ans);
	}
	
}
