#include<stdio.h>
#include<conio.h>

struct student
{
	char name[50],grade;
	int rollno,i,total,marks[5];
	float per;
};

void main()
{
	struct student s1;
	int i;
	clrscr();

	printf("\nEnter name: ");
	scanf("%s",s1.name);

	printf("\nEnter RollNo: ");
	scanf("%d",&s1.rollno);

	printf("\nEnter marks of 5 subjects:\n");
	s1.total = 0;

	for(i=0 ;i<5; i++)
	{
		printf("Subject %d: ",i+1);
		scanf("%d",&s1.marks[i]);
		s1.total += s1.marks[i];
	}

	s1.per = s1.total/5;

	if(s1.per>=90)
	{
		s1.grade = 'A';
	}
	else if(s1.per>=75)
	{
		s1.grade = 'B';
	}
	else if(s1.per>=50)
	{
		s1.grade = 'C';
	}
	else if(s1.per>=35)
	{
		s1.grade = 'D';
	}
	else
	{
		s1.grade = 'F';
	}

	printf("\n--------Student Result--------\n");
	printf("\nStudent Name: %s",s1.name);
	printf("\nStudent RollNo: %d",s1.rollno);
	printf("\nStudent Total: %d",s1.total);
	printf("\nStudent Percentage: %.2f",s1.per);
	printf("\nStudent Grade: %c",s1.grade);

	getch();
}