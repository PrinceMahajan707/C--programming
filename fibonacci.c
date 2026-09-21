#include<stdio.h>
void main()
{
	int a,b,n,ans;
	a=1;
	b=1;
	printf("how many terms of Fibbonacci series require ");
	scanf("%d",&n);
	printf("%d,%d",a,b);
	int i=2;
	while(i<=n)
	{
		ans=a+b;
		printf(",%d",ans);
		a=b;
		b=ans;
		i++;
	}
}
