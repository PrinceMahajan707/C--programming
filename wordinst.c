#include<stdio.h>
void main()
{
	int i,word;
	char st[100];
	printf("Enter Any String ");
	gets(st);
	for(i=0;st[i]!=NULL;i++)
	{
		if(st[i]==32)
		{
			word++;
		}
	}
	printf("Number of Words is %d",word);
}
