#include<stdio.h>
#include<conio.h>

void main()
{
  int i,j,k;
  clrscr();
  for(i=1;i<=5;i++)
  {
    for(j=1;j<=i;j++)
  {
    printf("*");
  }
  printf("\n");
  }
  getch();
}