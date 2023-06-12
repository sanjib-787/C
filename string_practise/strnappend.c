#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 100
char *strnappend(char *dest, const char *src, int n) {
	int len = strlen(dest);
	int count = 0;
	while(*src != '\0') {
		*(dest + len) = *src;
		count++;
		src++;
		len++;
		if(n == count){
			break;
		}
	}
	printf("%s", dest);
}
int main(void)
{
	char *src, *dest;
	int n;
	src = (char *) malloc (sizeof(char) * SIZE);
	dest = (char *) malloc (sizeof(char) * SIZE);
	printf("enter src string:\n");
	fgets(src, SIZE, stdin);
	*(src + (strlen(src) - 1)) = '\0';
	printf("enter dest string:\n");
	fgets(dest, SIZE, stdin);
	*(dest + (strlen(dest) - 1)) = '\0';
	printf("enter a number:\n");
	scanf("%d",&n);
	strnappend(dest, src ,n);

	return 0;
}
