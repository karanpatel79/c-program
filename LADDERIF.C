#include<stdio.h>
#include<conio.h>

void main()
{
  int a,s1,s2,s3,sum=0;
  char name[20];
  float per;
  clrscr();

  printf("\nEnter Name: ");
  scanf("%s",name);
  printf("\nEnter subject1: ",s1);
  scanf("%d",&s1);
  printf("\nEnter subject2: ",s2);
  scanf("%d",&s2);
  printf("\nEnter subject3: ",s3);
  scanf("%d",&s3);

  sum = s1+s2+s3;
  per = sum/3;

  if(per>70)
  {
	printf("\nExcelent performance");
  }
  else if(per>60)
  {
	printf("\nGreat performance");
  }
  else if(per>50)
  {
	printf("\nGood performance");
  }
  else if(per>40)
  {
	printf("\nMid performance");
  }
  else
  {
	printf("\nPoor performance");
  }
  getch();
}