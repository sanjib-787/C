#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 100
int main(void)
{
	char *str1 = NULL;
	char *str2 = NULL;
	char *temp1 = NULL;
	char *temp2 = NULL;
	str1 = (char *) malloc(sizeof(char) * SIZE);
	str2 = (char *) malloc(sizeof(char) * SIZE);
	printf("enter a sentence to delete duplicate word:\n");
	fgets(str1, SIZE, stdin);
	*(str1 +(strlen(str1)-1)) = '\0';
	temp1 = str1;
	temp2 = str2;
	while(*str1 != '\0') {
		*str2 = *str1;
		str1++;
		str2++;
		if(*str1 == ' ') {
			*str2 ='\0';
			str2++;
		}
	}
		printf("%s", temp2);

}

