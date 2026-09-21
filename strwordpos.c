#include<stdio.h>
void main()
{
	char st[20],word,pos;
	pos=0;
	int i;
	printf("----Programm to find words posirion in given string----");
	printf("\nEnter Any String ");
	gets(st);
	printf("Enter Word that u want to find ");
	scanf("%c",&word);
	for(i=0;st[i]!=NULL;i++)
	{
		pos++;
		if(st[i]==word)
		{
			printf("\nWord is found & its position is %d",pos);
		}
	}
	
}
