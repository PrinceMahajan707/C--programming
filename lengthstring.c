#include<stdio.h>
void main()
{
	char st[10];
	int i,len;
	len=0;
	printf("ENter String ");
	gets(st);
	for(i=0;st[i]!=NULL;i++)
	{
		len++;
	}
	printf("length = %d",len);
}
