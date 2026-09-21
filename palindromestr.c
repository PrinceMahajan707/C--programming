#include<stdio.h>
void main()
{
	int i,len;
	char st[10];
	len=0;
	printf("Enter Any String ");
	gets(st);
	for(i=0;st[i]!=NULL;i++)
	{
		len++;
	}
	len--;
	for(i=len;st[i]!=NULL;i--)
	{
		printf("%c",st[i]);
	}
}
