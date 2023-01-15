#include<stdio.h>
int main ()
{
	
	

	int k,space;
	
	printf("ENTER THE NUMBER HERE ");
	scanf("%d",&k);
	space=k;
		for(int r=1;r<=k;r++)
	{
	for(int c=1;c<=k;c++)
	{
		for(int i=1;i<=k;i++)
	{
	for(int j=1;j<=space;j++)
	{
	
	  if (r!=c)
	  printf("  ");
	  else  
	  printf("*");{
	   if (space!=j)
	  printf("  ");
	  else 
	  printf("*");
	  }
	  
	printf("\n");
}
	
	
	printf("\n");
	space--;
}
}
}
}