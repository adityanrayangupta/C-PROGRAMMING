#include<stdio.h>
int main ()
{
	int a,reverse;
	printf("%d",reverse);
	printf("enter the number here ");
	scanf("%d",&a);
	int g=a;
	while (a!=0)//321
	{
		reverse=reverse *10+a%10;//1
		a=a/10;
		
	}
	if (reverse ==g)
	printf("PALINDROME");
	else 
	printf("NOT");

}