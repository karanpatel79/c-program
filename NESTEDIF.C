#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	clrscr();

	printf("\nEnter A :");
	scanf("%d",&a);

	printf("\nEnter B :");
	scanf("%d",&b);

	printf("\nEnter C:");
	scanf("%d",&c);

	if(a>b)
	{
		if(a>c)
		{
			printf("\n A is maximum");
		}
		else
		{
			printf("\n C is maximum");
		}
	}

	else
	{
		if(b>c)
		{
			printf("\n B is maximum");
		}
		else
		{
			printf("\n C is maximum");
		}
	}
	getch();
}