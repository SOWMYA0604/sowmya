#include<stdio.h>
int main()
{
	int a,b;
	char operators;
	printf("enter 2 integer values\n");
	scanf("%d %c %d",&a, &operators,&b);
	switch(operators)
	{
		case '+':
			printf("%d",a+b);
			break;
		case '-':
			printf("%d",a-b);
			break;
		case '*':
			printf("%d",a*b);
			break;
		case '/':
			printf("%d",a/b);
			break;
		default:
			printf("unknown operator");
			break;
	}
	
	
}
