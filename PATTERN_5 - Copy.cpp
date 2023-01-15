#include<stdio.h>
int main ()
{
	int i;
	int k;
	printf("ENTER THE NUMBER HERE ");
	scanf("%d",&k);
	for (i=1;i<=k;i++)
	{
		for (int j=1;j<=k;j++)
		if (i%2==0)
		printf("%c",(char)(i+64));
		else 
		printf("%c",(char)(i+96));
		printf("\n");
	}
	}