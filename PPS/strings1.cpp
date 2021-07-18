/* Program using string inbuit functions(strlen,strcat,strcmp,strncat,strncpy)*/
#include<stdio.h>
#include<string.h>
int main()
{
	char name1[100],name2[100];
	printf("Enter a name \n");
	gets(name1);
	printf("the length of the string is %d \n",strlen(name1));
	printf("Enter a string \n");
	gets(name2);
	strcat(name1,name2);
	printf("The new string is \n");
	puts(name1);
	strcmp(name1,name2);
	printf("By comparing strings it is %c \n",strcmp(name1,name2));	
	strncat(name1,name2,5);
	printf("the new string after appending 5 char is  \n");
	puts(name1);
	strncpy(name1,name2,2);
	printf("the new string after copying 2 char is \n");
	puts(name1);
	
	
	
	
}
