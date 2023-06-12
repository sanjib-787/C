#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 100
int strncomp(const char *str1, const char *str2, int n);
int main(void)
{
	char *str1, *str2;
	int n;
	str1 = (char *) malloc (sizeof(char) * SIZE);
	str2 = (char *) malloc (sizeof(char) * SIZE);
	printf("enter 1st string: ");
	fgets(str1, SIZE, stdin);
	*(str1 + (strlen(str1) - 1)) = '\0';
	printf("enter 2nd string: ");
	fgets(str2, SIZE, stdin);
	*(str2 + (strlen(str2) - 1)) = '\0';
	printf("enter a number: ");
	scanf("%d",&n);
	printf("%d\n",strncomp(str1,str2,n));
}
int strncomp(const char *str1, const char *str2, int n)
{
	int count = 0;
	while(*str1 != '\0' && *str2 != '\0'){
		if(*str1 == *str2){
			count++;
			str1++;
			str2++;
			if(n == count) {
				return 0;
			}
		} else if(*str1 > *str2){
			return 1;
		} else {
			return -1;
		}
	}
}
