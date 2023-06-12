#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 10
char *str_palin(char *cptr);
int main(void)
{
	char *cptr = NULL;
	cptr = (char *)malloc(sizeof(char) * SIZE);
	printf("enter a string\n");
	fgets(cptr, SIZE, stdin);
	*(cptr + (strlen(cptr) - 1)) = '\0';
	str_palin(cptr);
	return 0;
}
char *str_palin(char *cptr)
{
	char *str,*temp;
	str = (char *)malloc(sizeof(char) * strlen(cptr));
	temp = str;
	for(int i = strlen(cptr) - 1; i >= 0; i--) {
		*str = *(cptr + i);
		str++;
	}
	str = temp;
	if(strcmp(str,cptr) == 0){
		printf("it is a pallindrome\n");
	} else {
		printf("it is not a pallindrome\n");
	}

}
