#include<stdio.h>
#include<conio.h>

void main()
{
  int i,j,k;
  clrscr();

  for(i=65;i<74;i++)
  {
	for(k=0;k<74-i;k++)
	{
		printf(" ");
	}
	for(j=65;j<i;j++)
	{
		printf(" %c",i);
	}
	printf("\n");
  }
  getch();
}