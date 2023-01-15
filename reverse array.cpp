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
	for(int i=0;i<n/2;i++)
	{
	int temp=a[n-1-i];
	a[n-1-i]=a[i];
	a[i]=temp;
	}
	for (int i;i<n;i++)
{
		printf("%d",a[i]);}
	
//for(int i=n-1;i>=0;)
//{printf("%d",a[i--]);
//}
}