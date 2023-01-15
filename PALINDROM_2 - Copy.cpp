#include<stdio.h>
int main ()
 {
 	 int n,t,r,sum=0;
 	 printf("ENTER THE NUMBER HERE ");
 	 scanf("%d",&n);
 	 t=n;
 	 while (n>0)
 	 {
 	 	r=n%10;
 	 	sum=r+(sum*10);
 	 	n=n/10;
	  }
	  if (t==sum)
	  printf("PALINDROME ");
	  else 
	  printf("NOT PALINDROME ");
 }