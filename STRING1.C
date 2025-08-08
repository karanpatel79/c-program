#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char a,s1[20],s2[20];
	clrscr();

	printf("\nEnter the value: ");
	gets(s1);

	a = strlen(s1);
	printf("\nThe length of a sting is: %d\n",a);

	strcpy(s2,s1);
	printf("\nThe copyed string is: %s",s2);

	getch();
}