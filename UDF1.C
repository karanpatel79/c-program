#include<stdio.h>
#include<conio.h>

void printLine()
{
	int i;
	for(i=0;i<40;i++)
	{
		printf("*");
	}
}

void printHash()
{
	int j;
	for(j=0;j<40;j++)
	{
		printf("#");
	}
}

void main()
{
	clrscr();
	printLine();
	printf("\n\n\n");
	printHash();
	getch();
}