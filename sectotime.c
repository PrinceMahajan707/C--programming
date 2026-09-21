#include<stdio.h>
void main()
{
	int sec,hrs,min;
	printf("Enter Seconds ");
	scanf("%d",&sec);
	min=sec/60;
	hrs=min/60;
	min=min-(hrs*60);	
	printf(" Time == %d : %d ",hrs,min);
}
