#include<stdio.h>
int main()
{
	int space=2,j,l;
		printf("ENTER THE NUMBER HERE ");
scanf("%d",&l);

for (int i=1;i<=l;i++)
{
	for (j=1;j<=l;j++)
	if (i==1||j==1||i==l||j==l)
	
	printf("*");
	else 
	printf(" ");
	printf("\n");
}
}