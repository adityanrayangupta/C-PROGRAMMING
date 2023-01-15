#include<stdio.h>
#include<math.h>
int prime(int a)
{
int c=0;
for (int i=1;i<a;i++)
{
	if (a%i==0)
	c++;
}
if(c==2)
return 1;
else 
return 0;
}
int armstrong (int a)

{
	int c,sum=0,r,x=0,dup=a;
	c=a;
	while (a!=0)
{
a=a/10;
	sum++;
}
while (c>0)
{
	r=c%10;
	x=x+pow(r,sum);
	x=x/10;
}
if (dup==x)
return 1;
else 
return 0;
}
int perfect (int a)
{
	int z=a,r,sum=0,c=0;
	for (int i=0;i<a;i++)
	{
		r=a%i;
		if (r==0)
		sum++;
	}
	if(z==sum)
	return 1;
	else 
	return 0;
	
}
int main ()
{
	int n,v,b;
scanf("%d %d %d",&n,&v,&b);
printf("%d",prime(n));
printf("%d",armstrong(v));
printf("%d",perfect(b));
return 88;
}