#include<stdio.h>
int main()
{
	int hours,min,sec;
	float rem,rem1;
	printf("enter");
	scanf("%d",&sec);
	hours=sec/3600;
	rem=sec-(hours*3600);
	min=rem/60;
	rem1=rem-(min*60);
	printf("standard time is %d hours %d minutes %f seconds",hours,min,rem1);
	
	
	
}
