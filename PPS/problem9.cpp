#include<stdio.h>
int main()
{
	int ID,workhours;
	float amountperhour,salary;
	printf("enter");
	scanf("%d%d%f",&ID,&workhours,&amountperhour);
	salary=workhours*amountperhour;
	printf("emloyee's ID is %d and salary is %f",ID,salary);	
	
	
	
}
