#include<stdio.h>
void main()
{
	int s1,s2,s3,total;
	float per;
	printf("Enter marks s1 ");
	scanf("%d",&s1);
	printf("Enter marks s1 ");
	scanf("%d",&s2);
	printf("Enter marks s1 ");
	scanf("%d",&s3);
	total=s1+s2+s3;
	per=(total/300)*100;
	
	printf("total = %d",total);
	printf("\nper = %f",per);
}

