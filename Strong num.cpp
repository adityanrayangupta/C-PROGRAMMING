#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int dup=n;
int sum=0;
int d;
while(n>0)
{
d=n%10;

int fact=1;
for(int i=1;i<=d;i++)
{
fact=fact*i;
}
printf("%d \n ",fact);
sum=sum+fact;
n=n/10;
printf("%d \n ",sum);
}
if(sum==dup)
printf("Yess");
else
printf("Ni");
}
