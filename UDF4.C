#include<stdio.h>
#include<conio.h>

void line()
{
	printf("\n--------------------------------------------------\n");
}

void oddEven(int a)
{
	if(a % 2 == 0)
	{
		printf("\nThe number is even");
	}
	else
	{
		printf("\nThe number is odd");
	}
}

void maxofTwo(int b, int c)
{
	if(b>c)
	{
		printf("\nB is maximum");
	}
	else
	{
		printf("\nC is maximuim");
	}
}
void pattern(int n)
{
	int i,j,k;

	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			printf(" ");
		}
		for(k=0;k<i;k++)
		{
			printf(" *");
		}
		printf("\n");
	}
}
void main()
{
	int w,x,y,z;
	clrscr();
	printf("\nEnter the value of A:");
	scanf("%d",&w);
	printf("\nEnter the value of B:");
	scanf("%d",&x);
	printf("\nEnter the value of C:");
	scanf("%d",&y);
	printf("\nEnter the value of N:");
	scanf("%d",&z);
	line();

	oddEven(w);
	line();
	maxofTwo(x, y);
	line();
	pattern(z);

	getch();
}