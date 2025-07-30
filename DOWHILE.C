#include<stdio.h>
#include<conio.h>

void main()
{
  int i;
  clrscr();
  printf("\nEnter the value ofd i: ");
  scanf("%d",&i);
  do
  {
	printf("%d\n",i);
	i++;
  }while(i < 10);

  getch();
}