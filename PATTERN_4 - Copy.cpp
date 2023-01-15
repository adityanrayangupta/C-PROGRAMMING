#include<stdio.h>
int main ()
{
	char i;
	int k;
	printf("ENTER THE NUMBER HERE ");
	scanf("%d",&k);
 for (i='a';i<=(char)(k+96);i++)
 {
 	for (int j=1;j<=k;j++)
 	printf("%c",i);
 	printf("\n");
 }
 }
 