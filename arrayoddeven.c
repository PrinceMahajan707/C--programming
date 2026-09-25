#include<stdio.h>
void main()
{
	int n[5],i,odd,even;
	odd=0;even=0;
	//float avg;
	//sum=0;
	printf("Enter  Any 5 Numbers ");
	for(i=0;i<5;i++)
	{
		scanf("\n%d",&n[i]);
	}
	for(i=0;i<5;i++)
	{
		//printf("\n%d",n[i]);
		if(n[i]%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}
	printf("odd = %d",odd);
	printf("\neven = %d",even);
	//avg=sum/5;
	//printf("\naverage of Number is %f",avg);
	//printf("\nSum Of All Numbers Is %d",sum);
}
