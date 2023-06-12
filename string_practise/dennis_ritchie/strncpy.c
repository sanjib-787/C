#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100
char *strncpy1(char *dest, char *src, int n);
int main(void)
{
	char *src, *dest;
	int n;
	src = (char *)malloc(sizeof(char) * SIZE);
	dest = (char *)malloc(sizeof(char) * SIZE);
	printf("enter a string:\n");
	fgets(src, SIZE, stdin);
	*(src + (strlen(src) - 1 )) = '\0';
	printf("enter number:\n");
	scanf("%d",&n);
	strncpy1(dest, src, n);
}
char *strncpy1(char *dest, char *src, int n)
{
	char *temp;
	temp = dest;
	int count = 0;
	while(*src != '\0'){
		*dest = *src;
		count++;
		if(n == count){
			break;
		}
		dest++;
		src++;
	}
	printf("%s\n",temp);
	return temp;
}
