#include<stdio.h>
int main()
{
	int i,c=0,n;
	printf("enter your number: ");
	scanf("%d \n ",&n);
	for(int i=1;i<=n;i++)	
	{
		if(n%i==0)
		c++;
		
	}
	if (c==2)
	printf("THE NUMBER IS PRIME ");
	else 
	 printf(" THE NUMBER IS NOT PRIME ");
	 
}