#include<stdio.h>
int main ()
{
	int n;
	scanf("%d",&n);
	int a[n];

	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
int max;
max=a[0];
for (int i=0;i<n;i++)
{
	if(a[i]>max)
	max=a[i];
}
printf("THE MAXIMUM NUMBER IN THE WHOLE ARRAY IS %d",max);
int  secmax;
secmax=-2147483648;
for (int i=0;i<n;i++)
{
	if(a[i]!=max&&a[i]>secmax)
	secmax=a[i];
}
	printf("\n second maximum %d",secmax);
}