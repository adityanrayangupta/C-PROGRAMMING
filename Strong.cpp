#include<stdio.h>
#include<math.h>
 int fact(int n)
	 {
	 if(n==0 || n==1)
	 return 1;
	 return (n*fact(n-1));
	 }
	
int main ()
{
	int a,b;
//	 printf("ENTER NUMBER ");
	 //scanf("%d",&a);
	 for(int i=1;i<10000000;i++)
	 {
	 int dup=i;
	 int sum=0;
	 while(dup>0)
	 {
	 sum=sum+fact(dup%10);
	 dup/=10;
	 
	 }
	 if(sum==i)
	 printf("%d \n ",sum);
	 }
	 }
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 