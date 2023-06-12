#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 100
char *strappend(char *dest, const char *src) {
	int n;
	n = strlen(dest);
	while(*src != '\0') {
		*(dest + n) = *src;
		n++;
		src++;
	}
	printf("%s\n",dest);
}
int main(void)
{
	char *src, *dest;
	src = (char *) malloc (sizeof(char) * SIZE);
	dest = (char *) malloc (sizeof(char) * SIZE);
	printf("enter src string:\n");
	fgets(src, SIZE, stdin);
	*(src + (strlen(src) - 1)) = '\0';
	printf("enter dest string:\n");
	fgets(dest, SIZE, stdin);
	*(dest + (strlen(dest) - 1)) = '\0';
	strappend(dest,src);
	return 0;
}
