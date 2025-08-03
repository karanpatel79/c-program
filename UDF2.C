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

void sum(int a, int b)
{
	printf("\nsum = %d: ",a + b);

}
void main()
{
	int a,b;
	clrscr();
	printLine();

	printf("\nEnter value of A: ");
	scanf("%d",&a);

	printf("\nEnter value of B:");
	scanf("%d",&b);

	printf("\n");

	printLine();
	printf("\n");

	sum(a,b);
	printf("\n");
	printLine();

	getch();
}