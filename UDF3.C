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

int sum(int a, int b)
{
	return a+b;
}

void main()
{
	int x,y,ans;
	clrscr();
	printLine();

	printf("\nEnter value of X: ");
	scanf("%d",&x);

	printf("\nEnter value of Y:");
	scanf("%d",&y);

	printf("\n");

	printLine();
	printf("\n");

	ans = sum(x,y);
	printf("\nsum = %d\n",ans);

	printLine();

	getch();
}