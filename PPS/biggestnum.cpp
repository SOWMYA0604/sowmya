#include<stdio.h>
int main()
{
	char charval;
	printf("enter");
	scanf("%c",&charval);
	if ((charval>='A' && charval<='Z') || (charval>='a'&& charval<='z'))
	    printf("your  entered character is an aplhabet");
	if (charval>=0)
        printf("Your entered character is a digit");
	else
	    printf("your entered character is a symbol");	
	
	
}
