#include<stdio.h>
int main ()
{
	int a,b,hcf=1;
	 printf("ENTER NUMBER ");
	 scanf("%d",&a);
	  printf("ENTER NUMBER ");
	 scanf("%d",&b);
	 int max=a>b?a:b;
	 int min=a<b?a:b;
	 for (int i=1;;i++)
	 {
	 	if ((max*i)%min==0)
	 	
	 	return max*i;
	 }
	 
	 
}