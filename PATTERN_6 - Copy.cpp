#include<stdio.h>
int main()
{
	int space,k;
	printf("ENTER THE NUMBER HERE ");
scanf("%d",&k);
space=k-1;
for (int i=1;i<=k;i++)
{
	for (int j=1;j<=space;j++)
	printf(" ");
	space--;
	for (int j=1;j<=i;j++)
	printf("%d",i);
	printf("\n");
}
}