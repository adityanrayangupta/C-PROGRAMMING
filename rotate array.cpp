#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int t=a[0];
	for (int i=1;i<n;i++)
	{
		a[i-1]=a[i];
		
	}
	a[n-1]=t;
	for (int i=0;i<n;i++)
	{
	printf("%d",a[i]);
	}
}