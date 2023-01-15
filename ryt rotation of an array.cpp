#include<stdio.h>
int main ()
{
	int n;
	printf("DECLARE THE SIZE OF AN ARRAY: ");
	scanf("%d",&n);
	int a[n];
	for (int i=0;i<n;i++)
	{
		printf("ENTER THE %d element here: ",i+1);
		scanf("%d",&a[i]);
	}
	int times,t;
	printf("ENTER THE NUMBER OF TIMES YOU WANT RYT ROTATION ");
	scanf("%d",&times);
	
	while(times--){
	t=a[n-1];
for(int i=n-1;i>0;i--)
a[i]=a[i-1];
a[0]=t;
}
	for (int i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}