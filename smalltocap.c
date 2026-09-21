#include<stdio.h>
void main()
{
	char st[20],i;
	printf("Enter Any String ");
	gets(st);
	for(i=0;st[i]!=NULL;i++)
	{
		printf("%c",st[i]-32);
	}
}
