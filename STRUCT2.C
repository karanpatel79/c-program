#include<stdio.h>
#include<conio.h>

struct student
{
	char name[50],grade;
	int rollno,total,marks[5];
	float per;
};

void main()
{
	struct student s[3];
	int i,j;
	clrscr();
	for(i=0;i<3;i++)
	{
		printf("\nEnter name: ");
		scanf("%s",s[i].name);

		printf("\nEnter RollNo: ");
		scanf("%d",&s[i].rollno);

		printf("\nEnter marks of 5 subjects:\n");
		s[i].total = 0;

		for(j=0;j<5;j++)
		{
			printf("\nSubject %d: ",j+1);
			scanf("%d",&s[i].marks[i]);
			s[i].total += s[i].marks[i];
		}

		s[i].per = s[i].total/5;

		if(s[i].per>=90)
		{
			s[i].grade = 'A';
		}
		else if(s[i].per>=75)
		{
			s[i].grade = 'B';
		}
		else if(s[i].per>=50)
		{
			s[i].grade = 'C';
		}
		else if(s[i].per>=35)
		{
			s[i].grade = 'D';
		}
		else
		{
			s[i].grade = 'F';
		}
		printf("\n---------------------------\n");
	}


	for(i=0;i<3;i++)
	{
		printf("\n--------Result--------\n");
		printf("\nStudent Name: %s",s[i].name);
		printf("\nStudent RollNo: %d",s[i].rollno);
		printf("\nStudent Total: %d",s[i].total);
		printf("\nStudent Percentage: %.2f",s[i].per);
		printf("\nStudent Grade: %c",s[i].grade);
	}
	getch();
}