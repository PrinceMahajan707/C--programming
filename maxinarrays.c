#include<stdio.h>
void main()
{
	int n[5],i,max,min,dif;
	printf("Enter 5 Numbers ");
	for(i=0;i<5;i++)
	{
		scanf("\n%d",&n[i]);
	}
	max=n[0];
	min=n[0];
	for(i=0;i<5;i++)
	{
		if(n[i]>max)
		{
			max=n[i];
		}
	}
	for(i=0;i<5;i++)
	{
		if(n[i]<min)
		{
			min=n[i];
		}
	}
	dif=max-min;
	printf("max number is %d",max);
	printf("\nmin number is %d",min);
	printf("\ndifference btw max and min is %d",dif);
}
