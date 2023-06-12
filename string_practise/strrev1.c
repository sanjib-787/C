#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 100
char *strrev(char *str)
{
	char *temp1,*temp2, ch;
	int len = 0;
	len = strlen(str);
	temp1 = str;
	temp2 = str +len -1;
	for(int i = 0; i < (len-1)/2; i++) {
		ch = *temp2;
		*temp2 = *temp1;
		*temp1 = ch;
		temp1++;
		temp2--;
	}

	printf("%s\n",str);
}
int main(void) {
	char *str;
	str = (char *)malloc(sizeof(char) * SIZE);
	printf("s1:\n");
	scanf("%s",str);
	strrev(str);
}
