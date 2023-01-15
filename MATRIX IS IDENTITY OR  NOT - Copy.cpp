#include<stdio.h>
int main ()
{
	int r,c,q=0;
	printf("DECLARE THE NUMBER OF ROWS ");
	scanf("%d",&r);
	printf("DECLARE THE NUMBER OF COLUMN");
	scanf("%d",&c);
	int a[r][c];
	for (int i=0;i<r;i++)
	{
		for (int j=0;j<c;j++)
	{
		scanf("%d",&a[i][j]);
		if (i==j)
		{
			if (a[i][j]==1)
			c++;
			
		}
		else 
		{
			if (a[i][j]==0)
			c++;
		}
	}
	}
	if (c==(r*c))
	printf("IT IS IDENTITY MATRIX ");
	else 
	printf("NOT A IDENTITY MATRIX ");
	
}