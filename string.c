#include<stdio.h>
void main()
{
	int i;
	char st[10];
	printf("enter Any string ");
	gets(st);
	for(i=0;st[i]!=NULL;i++)
	{
		printf("%c",st[i]);
	}
}
