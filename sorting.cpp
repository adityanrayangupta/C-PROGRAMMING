#include<stdio.h>
intmain ()
{
	int n,c;
	printf("DECLARE THE SIZE OF ARRAY ");
	scanf("%d",&n);
	int a[n];
	for (int i=0;i<n;i++)
	{
		printf("write the %d element here ",i+1);
		scanf("%d",&a[i]);
		
	}
	for (int j=0;j<n;j++)
	{
		for (int i=0;i<n;i++)
		{
			if (a[i]>a[i+1])
			{
				c=a[i];
				a[i]=a[i+1];
				a[i+1]=c;
			}
		}
	}
	printf("SORTED ARRAY ");
	for (int i=0;i<n;i++)
	{
		printf("%d",a[i]);
}
return 0;
}