#include<stdio.h>
struct student
{
	int rollno1,rollno2;
	char name1[20];
	char name2[20];
	int marks[3];
}s;
int main()
{
	int i,j;
	printf("\n enter student1 name\n");
	scanf("%s",&s.name1);
	printf("\n enter student1 rollno\n");
	scanf("%d",&s.rollno1);
	for (i=0;i<3;i++)
	{
		printf("\n enter student1 M%d subject marks\n",i+1);
		scanf("%d",&s.marks[i]);
    }
    printf("\n enter student2 name\n");
    scanf("%s",&s.name2);
    printf("\nenter student2 rollno\n");
    scanf("%d",&s.rollno2);
    for (j=0;j<3;j++)
    {
        printf("\n enter student2 M%d marks\n",j+1);
        scanf("%d",&s.marks[3]);
    }
    printf("\nSTUDENT DETAILS\n");
    printf("\nNAME  ROLLNO  M1  M2  M3\n");
    printf("%s  %d  %d  %d  %d\n",s.name1,s.rollno1,s.marks[0],s.marks[1],s.marks[2]);
    printf("%s  %d  %d  %d  %d",s.name2,s.rollno2,s.marks[0],s.marks[1],s.marks[3]);
}
	
	

