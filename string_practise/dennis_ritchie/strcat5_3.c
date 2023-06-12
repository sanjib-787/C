#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define SIZE 100
char *strcat1(char *dest, const char *src);
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
	strcat1(dest, src);
	printf("%s\n",dest);
	return 0;
}
char *strcat1(char *dest, const char *src)
{
	int n = strlen(dest);
	while(*src != '\0') {
		*(dest+n) = *src;
		src++;
		n++;
	}
	return dest;
}
