#include<stdio.h>
void main()
{
	int n[5],even,odd,i;
	even=0;
	odd=0;
	printf("Enter Any 5 Numbers" );
	for(i=0;i<5;i++)
	{
		scanf("\n%d",&n[i]);
	}
	for(i=0;i<5;i++)
	{
		if(n[i]%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}
	printf("no. of Even = %d",even);
	printf("\nno. of Odd = %d",odd);
}
