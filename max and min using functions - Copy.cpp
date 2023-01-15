#include<stdio.h>
int max(int a, int b)
{

	if (b>a)
	return b;
	else 
	return a;
	
}
int min (int a,int b)
{
	if (a>b)
	return b;
	else 
	return a;
}
int main()
{
	int n1,n2;
	printf("ENTER THE FIRST NUMBER");
	scanf("%d",&n1);
	printf("ENTER THE SECOND NUMBER");
	scanf("%d",&n2);
	printf(" MIN NUMBER IS %d \n ",min (n1,n2));
	printf(" MAX NUMBER IS %d",max (n1,n2));
	
	return 123;
	
}
