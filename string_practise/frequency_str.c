#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 50
int main(void)
{
	char *str1 = NULL, *str2 = NULL, *temp1, *temp2;
	int count = 0;
	str1 = (char *)malloc(sizeof(char) * SIZE);
	str2 = (char *)malloc(sizeof(char) * SIZE);
	printf("enter a string:\n");
	fgets(str1, SIZE, stdin);
	*(str1 + (strlen(str1) - 1 )) = '\0';
	printf("enter sub string:\n");
	fgets(str2, SIZE, stdin);
	*(str2 + (strlen(str2) - 1 )) = '\0';
	temp1 = str1;
	temp2 = str2;
	while(*str1 != '\0') {
		while(*str2 != '\0' && *str2 == *str1) {
				str1++;
				str2++;
				if(*str2 == '\0') {
					count++;
				}
		}
		str2 = temp2;
		str1++;
	}
	printf("%d",count);
	return 0;
}
