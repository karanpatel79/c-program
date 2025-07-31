#include<stdio.h>
#include<conio.h>

void main()
{
	int a[5],i,sum=0;
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("\nEnter the element value of A[%d]: ",i);
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("\n*************************************");
	for(i=0;i<5;i++)
	{
		printf("\nArray Element A[%d]: %d\n",i,a[i]);
	}
	printf("\n*************************************");
	printf("\nsum:%d",sum);
	getch();
}