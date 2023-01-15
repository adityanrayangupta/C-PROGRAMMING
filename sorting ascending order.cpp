#include<stdio.h>
int main ()
{
	int n,t;
	printf("DECLARE THE SIZE OF AN ARRAY: ");
	scanf("%d",&n);
	int a[n];
	for (int i=0;i<n;i++)
	{
		printf("ENTER THE %d element here: ",i+1);
		scanf("%d",&a[i]);
	}
	for (int i=0;i<n;i++)
	{
	 if (a[i]<a[i+1])
	{
	 	t=a[i+1];
	 	a[i+1]=a[i];
	 	a[i]=t;
	}
	 for (int i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
}