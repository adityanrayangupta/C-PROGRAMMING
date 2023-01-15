#include<stdio.h>
int main ()
{
	int j,k=0;
	printf("ENTER THE NUMBER HERE ");
	scanf("%d",&j);//**
	while (j>0)
	{
	
k++;
j/=10;
}
return k;
}
	
	