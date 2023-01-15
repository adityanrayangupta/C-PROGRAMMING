#include<stdio.h>
int main ()
{
	int c;
	long long int a;
	printf("ENTER THE NO. HERE ");
	scanf("%lld",&a);
    while (a>0)
	{
	a=a/10;
	++c;
	}
	printf("NO. OF DIGITS ARE %d",c);

	
	
}