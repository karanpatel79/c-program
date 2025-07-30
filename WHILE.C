#include<stdio.h>
#include<conio.h>

void main()
{
  int i;
  clrscr();
  printf("\nEnter the value ofd i: ");
  scanf("%d",&i);
  while (i < 10)
  {
	printf("%d\n",i);
	i++;
  }
  getch();
}