// array is a derived data type. it is a collection of similar value/datatype put together in a continuous fashion.
// wacp to create an array and find the sum of all the elements in the array?
#include<stdio.h>
int main ()
{
	int n,sum=0;
	printf("ENTER THE SIZE OF AN ARRAY ");
	scanf("%d",&n);
	int a[n];
	for (int i=0;i<n;i++)
	{
		printf("ENTER THE ELEMENT: ");
		scanf("%d",&a[i]);
	}
	for (int i=0;i<n;i++)
	{
		sum = sum + a[i];
	}
printf("sum of the array is %d",sum);
return 0;
}


