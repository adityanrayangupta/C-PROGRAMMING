#include<stdio.h>
int main ()
{
	int sum=0,j,k;
	printf("ENTER THR NUMBER HERE ");
	//scanf("%d",&k);
	//j=k*k;
	for(int i=1;i<=100000000;i++){
	int j=i*i;
	sum=0;
	while (j>0)
	{
		sum=sum+j%10;
		j=j/10;
		
		
	}
	if(sum==i)
	printf("%d\n",i);
	}
}