#include<stdio.h>
int main ()
{
	int r,c;
	printf("DECLARE THE NUMBER OF ROWS ");
	scanf("%d",&r);
	printf("DECLARE THE NUMBER OF COLUMNS ");
	scanf("%d",&c);
	int a[r][c];
	for (int i=0; i<r; i++)
	{
		for (int j=0; j<c; j++)
			scanf("%d",&a[i][j]);
	}
	printf("ENTER THE SECOND MATRIX NOW ");
	int b[r][c];
	for (int i=0; i<r; i++)
	{
		for (int j=0; j<c; j++)
			scanf("%d",&b[i][j]);
	}
	int q[r][c];
	for (int i=0; i<r; i++)
	{
		for (int j=0; j<c; j++)
			q[i][j]=a[i][j]+b[i][j];

	}
	printf("\n");
	for (int i=0; i<r; i++)
	{
		for (int j=0; j<c; j++)
			printf("%d ",q[i][j]);
		printf("\n");
	}



}