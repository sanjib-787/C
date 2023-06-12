#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 10
int strcspan(const char *str1, const char *str2)
{
	int count = 0;
	const char *temp;
	atemp = str2;
	while(*str1 != '\0'){
		while(*str2 != '\0') {
			if(*str1 == *str2){
				printf("%d\n", count);
				break;
			}
			str2++;
		}
		count++;
		str2 = temp;
		str1++;
	}
}
int main(void)
{
	char *str1,*str2;
	str1 =(char *)malloc(sizeof(char) * SIZE);
	str2 =(char *)malloc(sizeof(char) * SIZE);
	printf("enter str1:\n");
	fgets(str1, SIZE, stdin);
	*(str1 + (strlen(str1)-1)) = '\0';
	printf("enter str2:\n");
	fgets(str2, SIZE, stdin);
	*(str2 + (strlen(str2)-1)) = '\0';
	strcspan(str1, str2);
}
