
#include<stdio.h>
int main ()
{
	
int a;
	int	s= a*a;
	
	int b=0;
	int c=0;
	while (s!=0)
	{
		b=s%10;
		c+=b;
		s=s/10;
	}
	if (c==a)
	printf("NUMBER IS NEON %d",a);
	
}