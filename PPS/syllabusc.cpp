#include<stdio.h>
int main()
{
	int n;
	printf("enter percentage");
	scanf("%d",&n);
	if (n>=70)
	    printf("distinction");
	if ((n>=60) && (n<70))
	    printf("first class");
	if ((n>=40) && (n<60))
	    printf("second class");
	if (n<40)
	    printf("Fail!");
	
}
