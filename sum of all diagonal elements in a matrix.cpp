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
			if (i==j||(i+j)==(n-1))
		{
			sum =sum + a[i][j];
		}
		else 
		printf(" ");
	}
	printf("\n");
	}
	printf("THE TRACE OF THE MATRIX IS %d ",sum);
}