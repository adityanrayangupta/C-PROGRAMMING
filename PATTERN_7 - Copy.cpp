#include<stdio.h>
int main ()
{
int space=4;

for(int i=1;i<=5;i++)
{
for(int j=1;j<=space;j++)
printf("1");

space--;
for(int j=1;j<=i;j++)
printf("%d",i);
printf("\n");
}

}