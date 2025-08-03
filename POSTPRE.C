#include<stdio.h>
#include<conio.h>

void main()
{
	int a=1,b=1,c=1,d=1,ans;
	clrscr();
	ans = a++ + ++b + --c + d-- + ++a + --d;

	printf("\nA: %d",a);
	printf("\nB: %d",b);
	printf("\nC: %d",c);
	printf("\nD: %d",d);
	printf("\nAnswer: %d",ans);
	getch();
}