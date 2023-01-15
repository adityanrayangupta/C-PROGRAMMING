#include<stdio.h>
int main()
{
	int a,sum=0,r,t;
printf("ENTER NO. HERE ");
scanf("%d",&a);
	while (a>0)
	{
		r=a%10;/* let a=100 ,r=0,sum=0 */
		sum=(sum*10)+r;
		a=a/10;
		
	}
	if (t>=0)
	printf("PALINDROM");
    else 
    printf("NOT A PALINDROM");
}