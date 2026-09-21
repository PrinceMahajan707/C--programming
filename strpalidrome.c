#include<stdio.h>
void main()
{
	char st[20],i,j,len,k;
	k=0;
	len=0;
	printf("Enter String  ");
	gets(st);
	for(i=0;st[i]!=NULL;i++)
	{
		len++;
	}
	len--;
	for(i=0,j=len;st[i]!=NULL;i++,j--)
	{
		if(st[i]!=st[j])
		{
			k=1;
			break;
		}
	}
	if(k==1)
	{
		printf("\nString is not Palindrome");
	}
	else{
		printf("\nString is Palindrome");
	}
}
