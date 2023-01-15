#include<stdio.h>
int main ()
 {
 	int a=27,d;
 	while (a!=0)
 	{
 		d=a%2;
 		a=a/2;
	 }
	 if (d==1)
	 printf("set");
	 else 
	 printf("not ");
}