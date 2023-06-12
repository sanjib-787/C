#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 100
int my_getline(char *str, int size); 
int main(void)
{
	char *str;
	str = (char *) malloc (sizeof(char) * SIZE);
	printf("enter a string:\n");
	printf("%d\n",my_getline(str,SIZE));
	printf("%s",str);
//	*(str + (strlen(str) - 1)) = '\0';
}
int my_getline(char *str, int size) 
{
	char *cptr;
	int ch;
	cptr = str;
	while((ch = getchar()) != EOF && ch != '\n'){
		*str = ch;
		str++;
	}
	if(*str == '\n') {
		*str = ch;
		str++;
	}
	*str = '\0';
	return (int)(str-cptr);
}
