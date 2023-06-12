#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 100
int strend(char *src, char *dest);
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
	strend(src, dest);
	printf("%d\n",strend(src, dest));
	return 0;	
}
int strend(char *src, char *dest)
{
	int len1,len2;
	len1 = strlen(src);
	len2 = strlen(dest);
	if(len2 > len1){
		return 0;
	}
	for(int i = len1-len2; i < len1; i++){
		if(*(src+i) == *dest){
			return 1;
		}
		dest++;
	}
	return 0;
}
