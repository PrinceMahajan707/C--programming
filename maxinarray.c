#include<stdio.h>
void main()
{
	int n[5],max,i;
	printf("Emter Any 5 Numbers ");
	for(i=1;i<=5;i++)
	{
		scanf("\n%d",&n[i]);
	}
	max=n[0];
	for(i=1;i<=5;i++)
	{
		if(n[i]>max)
		{
			max=n[i];
		}
	}
	printf("max = %d",max);
}
