#include<stdio.h>
   int main()
{
unsigned short int x = -10; 
int y = 10;
if ( y <= x) 
printf( “He is good\n”);
if ( y == ( x = -10)) 
printf( “She is better\n”);
if (( int) x == y) 
printf(“it is the best\n”);
}
