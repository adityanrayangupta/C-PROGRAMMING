#include<stdio.h>
int main ()
{
	int n;
	printf("DECLARE SIZE OF ARRAY HERE ");
	scanf("%d",&n);
	int a[n];
	for (int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int j,i;
	printf("PRINTF THE ELEMENT WHICH U WANT TOO SEARCH ");
	scanf("%d",&j);
	for ( i=0;i<n;i++)
	{
	     if(j==a[i])
	    {
		  printf("%d",i+1);
	  break; 
}
	     
	     
		
	}
	
	if(i==n)
	printf("not found");
}