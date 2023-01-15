//code of recurssion 
// find the sum of all number using recurssion.
#include<stdio.h>
int fact(int x)
{
	if (x>=1)
	{
		return x+fact(x-1);
	}
	else 
	{
		return 0;
	}
}
int main ()
{
	int a,x;
	printf("ENTER ANY NUMBER: ");
	scanf("%d",&a);
	x=fact(a);
	printf("SUM is =%d",x);
	
}