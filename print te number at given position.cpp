#include<stdio.h>
int main ()
{
	int n;
	printf("DECLARE THE SIZE OF AN ARRAY ");
	scanf("%d",&n);
	int a[n],i;
	for (int i=0;i<n;i++)
	{
		printf("ENTER THE %d ELEMENT HERE  ",i+1);
		scanf("%d",&a[i]);
	}
	int j;
	printf("ENTER THE POSITION HERE ");
	scanf("%d",&j);
	for (int i=0;i<n;i++)
	{
		if (a[j-1]==a[i])
		printf("THE NUMBER AT %d POSITION IS %d",j,a[i]);
	
	}}