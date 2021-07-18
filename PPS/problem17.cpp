#include<stdio.h>
int main()
{
	int cm,meters,kilometers;
	printf("enter length in centimeters");
	scanf ("%d",&cm);
	meters=cm/100;
	kilometers=cm/1000*100;
	printf("converted to %d meters and %d kilometers",meters,kilometers);
	
	
	
}
