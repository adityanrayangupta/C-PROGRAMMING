#include<stdio.h>
int main ()
{
	int n;
	printf("DECLARE THE SIZE OF AN ARRAY ");
	scanf("%d",&n);
	int a[n],b[n],c[n];
	for (int i=0;i<n;i++)
	{
		printf("ENTER THE %d ELEMENT ",i+1);
		scanf("%d",&a[i]);
		
	}
	printf("ENTER THE SECOND ARRAY ");
		for (int i=0;i<n;i++)
	{
		printf("ENTER THE %d ELEMENT ",i+1);
		scanf("%d",&b[i]);
		
	}
		for (int i=0;i<n;i++)
	{
	c[i]=a[i]+b[i];
    }
    	for (int i=0;i<n;i++)
	{
	
		printf("%d",c[i]);
		
	}
}