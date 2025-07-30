#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,choice;
	clrscr();
	printf("\nEnter value of A: ");
	scanf("%d",&a);
	printf("\nEnter value of B: ");
	scanf("%d",&b);
	printf("\nSelect your choice: \n");
	printf("\n1. Addition: ");
	printf("\n2. Subtraction: ");
	printf("\n3. Multypletion: ");
	printf("\n4. Division: ");
	printf("\nEnter Choice Number: ");
	scanf("%d",&choice);

	switch (choice)
	{
		case 1:

			printf("\nAddition: %d",a+b);
			break;

		case 2:

			printf("\nSubtraction: %d",a-b);
			break;

		case 3:

			printf("\nMultyplication: %d",a*b);
			break;

		case 4:
			if(b!=0)
				printf("\nDivision: %d",a/b);
			else
				printf("/nCannot devided by zero!");
			break;

		default:
			printf("\nInvalid choice");
		}
	getch();
}