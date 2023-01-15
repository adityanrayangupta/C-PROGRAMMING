#include<stdio.h>
int main ()
{
	

	int k;
	int i,j;
	printf("ENTER THE NUMBER HERE ");
	scanf("%d",&k);
	for(int i=1;i<=k;i++)
	{
	for(int j=1;j<=k;j++)
	{
	
	  if (i!=j)
	  printf("  ");
	  else 
	  printf("*");
	  }
	printf("\n");

}
}