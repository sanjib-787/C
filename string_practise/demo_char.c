#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void) 
{
	char *cptr;
	cptr = (char *) malloc (sizeof(char) * 5);
	printf("enter a string:\n");
	scanf("%s",cptr);
	printf("length :%d\n",strlen(cptr));
}
