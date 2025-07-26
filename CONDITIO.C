#include<stdio.h>            S
#include<conio.h>

void main()
{
	int a,b;
	clrscr();
	printf("\nEnter A :");
	scanf("%d",&a);
	printf("\nEnter B :");
	scanf("%d",&b);
	if(a>b)
	{
		printf("\n A is maximum");
	}
	else
	{
		printf("\n B is maximum");
	}
	getch();
}