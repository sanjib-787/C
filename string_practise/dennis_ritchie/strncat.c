#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 100
char *strncat1(char *dest, char *src, int n);
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
	strncat1(dest, src, n);
	printf("%s\n",dest);
	return 0;
}
char *strncat1(char *dest, char *src, int n)
{
	int len = strlen(dest);
	while(n > 0){
		*(dest+len) = *src;
		n--;
		len++;
		src++;
	}
}
