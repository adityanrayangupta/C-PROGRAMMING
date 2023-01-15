#include<stdio.h>
int main ()
{
	int r,c,sum=0,i,j;
	printf("DECLARE THE NUMBER OF ROWS ");
	scanf("%d",&r);
	printf("DECLARE THE NUMBER OF COLUMNS ");
	scanf("%d",&c);
	int a[r][c];
	for (int i=0; i<r; i++)
	{
		for (int j=0; j<c; j++)
	{
	scanf("%d",&a[i][j]);
}
if ((i+j)%2==0||(i+j)%2!=0)
sum=sum+ a[i][j];
}
printf("THE SUM OF ALL THE ELEMENT IN THE MATRIX IS %d",sum);
}