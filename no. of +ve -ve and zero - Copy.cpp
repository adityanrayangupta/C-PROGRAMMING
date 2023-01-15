// wacp to count the number of negative element , positive element and zero in an array?
#include<stdio.h>
int main ()
{
	int n,pcount=0,zcount=0,ncount=0;
	printf("ENTER THE SIZE OF AN ARRAY ");
	scanf("%d",&n);
	int a[n];
	for (int i=0;i<n;i++)
	{
		printf("ENTER THE ELEMENT: ");
		scanf("%d",&a[i]);
	}
	for ( int i=0;i<n;i++)
	{
		if (a[i]>0)
		pcount++;
		else if (a[i]<0)
		ncount++;
		else 
		zcount++;
		
	}
	printf(" we have %d positive numbers \n  ",pcount);
	printf(" we have %d negative  numbers\n",ncount);
	printf(" we have %d zero ",zcount);
}