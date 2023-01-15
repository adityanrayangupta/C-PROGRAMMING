#include<stdio.h>
int main ()
{
	int n;
	int min;
	scanf("%d",&n);
	int a[n];
int i;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	min=a[i];
	for(int i=0;i<n;i++)
	{
		if(a[i]<min)
		min=a[i];
	}
	printf("MIN VALUE OF THE ARRAY IS %d",min);
	
	
}