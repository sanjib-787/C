#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 100
int main( void )
{
	char *str1 = NULL;
	char **str2 = NULL;
	char **temp = NULL;
	int j = 0, k = 0;
	str1 = (char *)malloc(sizeof(char) * SIZE);
	printf("enter a sentence to delete duplicate word:\n");
	fgets(str1,SIZE,stdin);
	*(str1+(strlen(str1)-1)) = '\0';
	str2 = (char **)malloc(sizeof(char *) * SIZE);
	for(int i = 0; i < 10; i++ ) {
		*(str2+i) = (char *)malloc(sizeof(char) * SIZE);
	}
	temp = str2;
	while(*(str1) != '\0') {
		if(*str1 == ' ') {
			*(*(str2 + j ) + k) = '\0';
			j++;
		} else {
			*(*(str2 + j) + k) = *str1;
			k++;
		}
	str1++;
	}
}
