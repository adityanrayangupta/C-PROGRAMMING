#include<stdio.h>                                                           
int main()
{
	int k,space;
	printf("ENTER THE NUMBER HERE__");
	scanf("%d",&k);
	space=k-1;
	for (int i=1;i<=k;i++)
	{
		for (int j=1;j<=space;j++)
		{
		printf("1");}
		space--;
	for (int j=1;j<=k;j++)
	printf("%d",i);
	printf("\n");
		
	}
}
