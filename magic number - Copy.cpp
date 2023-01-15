#include<stdio.h>
int main ()
{
	int r,s,n;
	printf("ENTER THE NUMBER HERE ");
	scanf("%d",&n);
	while (n>=9)
	{
		s=0;
		while (n!=0)
		{r=n%10;
		s+=r;
		n=n/10;
		}
		n=s;
	}
	if (n==1)
	printf("ITS A MAGIC NUMBER  ");
	else 
	printf("NOT A MAGIC NUMBER ");
	
}