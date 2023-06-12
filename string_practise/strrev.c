#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 100
char *strrev(char *str)
{
	char *temp1,*temp2;
	int len = strlen(str);
	temp1 = (char *)malloc(sizeof(char) * len);
	temp2 = temp1;
	while(len != 0) {
		*temp1 = *(str + (len-1));
		len--;
		temp1++;
	}
	temp1 = temp2;
	printf("%s\n",temp1);
}
int main(void) {
	char *str;
	str = (char *)malloc(sizeof(char) * SIZE);
	printf("s1:\n");
	scanf("%s",str);
	strrev(str);
}
