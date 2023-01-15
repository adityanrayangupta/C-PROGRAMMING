#include<stdio.h>
int main()
{
	int k=0;
	for(int i=1;i<=5;i++)
	{
	for(int j=1;j<=i;j++)
	{
	if(j%2!=0)
	k=1;
	else
	k=0;
	printf("%d",k);
	}
	printf("\n");
	}
	
}