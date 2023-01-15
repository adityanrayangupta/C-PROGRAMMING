#include<stdio.h>
int main ()
 {
 	int p,cp,sp,pp;
 	printf("ENTER THE COST PRICE HERE ");
 	scanf("%d",&cp);
 	printf("ENTER THE SELLING PRICE HERE ");
 	scanf("%d",&sp);
 	p=sp-cp;
 	pp=(p*100)/cp;
 	printf("THE PROFIT IS %d \n ",p);
 	printf("THE PROFIT PERCENTAGE  IS %d",pp);
 }
 