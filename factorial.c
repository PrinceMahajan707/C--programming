#include<stdio.h>
int main()
{
	int n,f;
	f=1;
	printf("Enter Any Number To Get Factorial ");
	printf("\n--------------------------------------");
	printf("\nEnter Number ");
	scanf("%d",&n);
	while(n>=1)
	{
		f=f*n;
		n--;
	}
	printf("\nFactorial of Given  Number is = %d",f);
	
}
