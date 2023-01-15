#include<stdio.h>
int main ()
{

	int k;
	int l;
	printf("ENTER THE NUMBER HERE ");
	scanf("%d",&l);
	for(int i=1;i<=l;i++)
	{
	for(int j=1;j<=l;j++)
	{
	if(i==1||j==1||i==l||j==l)
	printf("*");
	else
	{
	
	printf("%c",(char)(k+65));
	
	
	if(k!=90)
	k++;
	else
	k=65;
	}
}
	
	printf("\n");
	}
	
	}
	
	
	