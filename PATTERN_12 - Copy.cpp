#include<stdio.h>
int main ()
{
	
	

	int k,space;
	int i,j;
	printf("ENTER THE NUMBER HERE ");
	scanf("%d",&k);
	space=k;
	for(int i=1;i<=k;i++)
	{
	for(int j=1;j<=space;j++)
	{
	
	  if (space!=j)
	  printf("  ");
	  else 
	  printf("*");
	  }
	printf("\n");
	space--;
}
}